#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll P,R,F;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld%lld%lld",&P,&R,&F);
		ll ans=0;
		while(P<=F)
		{
			ans++;
			P*=R; 
		}
		printf("%lld\n",ans);
	}
	return 0;
}
