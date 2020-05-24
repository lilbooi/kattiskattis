#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
int ans=INF;
typedef pair<int,int> pa;
map<pa,int> dic;
int dfs(int h,int t){
	if(dic.count(make_pair(h,t)))	return dic[make_pair(h,t)];
	if(!t&&!(h&1)){
		dic[make_pair(h,t)]=(h>>1);
		return (h>>1);
	}
	int ret = INF;
	if(h<=2&&t<=2)	ret = min(ret,dfs(h,t+1));
	if(h>=2&&t>=0)	ret = min(ret,dfs(h-2,t));
	if(t>=2&&h>=0)	ret = min(ret,dfs(h+1,t-2));
	ret++;
	dic[make_pair(h,t)]=ret;
	return ret;	
}
int main()
{
	int h,t;
	while(scanf("%d%d",&h,&t)){
		dic.clear();
		dic[make_pair(2,0)]=1;
		dic[make_pair(1,0)]=INF;
		dic[make_pair(0,0)]=0;
		dic[make_pair(0,4)]=3;
		dic[make_pair(1,2)]=2;
		if(!h&&!t) break;
		ans=dfs(h,t);
		if(ans==INF) ans=-1;
		printf("%d\n",ans);
	}
	return 0;
 } 
