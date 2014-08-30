#include<iostream>
#include<limits.h>
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
vector<int> graph[100000];
int level[100000],n,visited[100000+5],par[100000];
int dp[100000][19];
void dfs(int i)
{
	visited[i]=1;
	int siz=graph[i].size();
	for(int x=0;x<siz;++x)
	{
		if(visited[graph[i][x]]==0)
		{
			level[graph[i][x]]=1+level[i];
			par[graph[i][x]]=i;
			dfs(graph[i][x]);
		}
	}
}
void create_dp()
{
	for(int j=0;j<=18;++j)
		for(int i=0;i<=n;++i)dp[i][j]=-1;
	for(int i=1;i<=n;++i)dp[i][0]=par[i];
	for(int j=1;j<=18;++j)
	{
		for(int i=1;i<=n;++i)
		{
			if(dp[i][j-1]!=-1)dp[i][j]=dp[dp[i][j-1]][j-1];
		}
	}
	cout<<endl;
}
int lca(int p,int q)
{
	if(level[p]<level[q])swap(p,q);
	for(int i=18;i>=0;i--)
	{
		if(level[p]-(1<<i)>=level[q])p=dp[p][i];
	}
	if(p==q)return p;
	for(int i=18;i>=0;i--)
	{
		if(dp[p][i]!=-1 && dp[p][i]!=dp[q][i])p=dp[p][i],q=dp[q][i];
	}
	return par[p];
}
int main()
{
	int a,b;
	cin>>n;
	for(int i=1;i<n;++i)
	{
		cin>>a>>b;
		graph[a].ps(b);
		graph[b].ps(a);
	}
	par[1]=-1;
	level[1]=1;
	dfs(1);
	create_dp();
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=18;++j)
		{
			if(dp[i][j]!=-1)cout<<i<<' '<<j<<'\t'<<dp[i][j]<<endl;
		}
		cout<<endl;
	}
	while(1)
	{
		cin>>a>>b;
		cout<<lca(a,b)<<endl;
	}
}
/*
8
1 2
1 3
2 4
2 5
4 7
4 8
5 6
*/
