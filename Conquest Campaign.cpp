//https://open.kattis.com/problems/conquestcampaign

#include<bits/stdc++.h>
using namespace std;
const int MAXN=105;
int maze[MAXN][MAXN];
int r,c,n;
int ans=1;
bool judge(){
	bool flag=true;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(maze[i][j]!=(ans+1)&&maze[i][j]){
				if(i>1&&!maze[i-1][j]){
					maze[i-1][j]=ans+1;
					flag=false;
				}
				if(j>1&&!maze[i][j-1]){
					maze[i][j-1]=ans+1;
					flag=false;
				}
				if(j<c&&!maze[i][j+1]){
					maze[i][j+1]=ans+1;
					flag=false;
				}
				if(i<r&&!maze[i+1][j]){
					maze[i+1][j]=ans+1;
					flag=false;
				}
			}
			if(maze[i][j]==0){
				flag = false;
			}
		}
	}
	if(!flag)
		ans++;
	return flag;
}
int main()
{
	memset(maze,0,sizeof(maze));
	scanf("%d%d%d",&r,&c,&n);
	int x,y;
	ans=1;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&x,&y);
		maze[x][y]=1;
	}
	while(!judge()){
	}
	printf("%d\n",ans);
	return 0;
 } 
