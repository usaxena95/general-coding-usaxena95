#include<iostream>
#include<map>
#include<vector>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<fstream>
using namespace std;//miller rabin primality 7 set for 64 bit int {2, 325, 9375, 28178, 450775, 9780504, 1795265022}
#define abs(x) ((x)>0?(x):-(x))
#define M 1000000007
#define lld signed long long int
#define pp pop_back()
#define ps(x) push_back(x)
#define tkint(n) scanf("%d",&n)
#define tkchar(ch) scanf("%c",&ch)
#define tklong(n) scanf("%I64d",&n)
lld adj[100][100];
lld dp[1<<21][21];
//O((n^2)(2^n))
int main()
{
	int n,m,a,c,b;
	cin>>n>>m;//vertices and edges
	for(int i=0;i<=n;++i)for(int j=0;j<=n;++j)adj[i][j]=adj[j][i]=M;
	for(int i=0;i<=(1<<n);++i)for(int j=0;j<=n;++j)dp[i][j]=M;
	for(int i=1;i<=m;++i)
	{
		cin>>a>>b>>c;
		adj[a][b]=adj[b][a]=c;
	}
	dp[1][0]=0;//base case
	for(lld mask=1;mask<(1<<n);++mask)
	{
		for(int i=1;i<n;++i)//i!=0 i.e. i>0
		{
			if(mask&(1<<i) && mask&1)
			{
				for(int j=0;j<n;++j)
				{
					if(mask&(1<<j) && j!=i)dp[mask][i]=min(dp[mask][i],dp[mask-(1<<i)][j]+adj[j][i]);
				}
			}
		}
	}
	lld ans=M;
	for(int i=1;i<n;++i)
	{
		ans=min(ans,dp[(1<<n)-1][i]+adj[0][i]);
	}
	cout<<ans;
}
/*
5 7
0 1 2
1 2 3
2 3 4
0 3 2
1 4 5
2 4 6
3 4 5
*/

