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
int main()
{
	int n,m,a,b;
	cin>>n>>m;//n<=14
	for(int i=1;i<=m;++i)
	{
		cin>>a>>b>>>;//0 based
		adj[a][b]=adj[b][a]=1;
	}
	//we have to the n-1th vertex
	//dp[0][0]=1;
	for(lld mask=1;mask<(1<<n);++mask)
	{
		for(int i=0;i<n;++i)
		{
			if(mask&(1<<i))
			{
				if(__builtin_popcount(mask)==1)
					dp[mask][i]=1;
				for(int j=0;j<n;++j)
				{
					if(mask&(1<<j) && j!=i)dp[mask][i]+=dp[mask-(1<<i)][j]*adj[i][j];
				}
			}
		}
	}
	lld ans=0;
	for(int i=0;i<n;++i)
	{
		ans+=dp[(1<<n)-1][i];
	}
	cout<<ans;
}
