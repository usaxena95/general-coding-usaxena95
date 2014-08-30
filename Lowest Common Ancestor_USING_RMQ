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
int level[100000+5],visited[100000+5],n,st[2*100000+5],occ[100000+5];
vector<int>euler,graph[100000+5];
int construct_RMQ( int i, int ss, int se)
{
    if (ss == se)
    {
        st[i] = euler[ss];
        return st[i];
    }
	int mid = ss+(se-ss)/2;
    int m1=construct_RMQ(2*i+1,ss, mid);
    int ans,m2=construct_RMQ(2*i+2,mid+1, se);
    if(level[m1]<=level[m2])ans= m1;
    else ans= m2;
    st[i]=ans;
    return ans;
}
int RMQUtil(int i,int ss, int se, int qs, int qe)
{
	if (qs <= ss && qe >= se)
        return st[i];
	if (se < qs || ss > qe)
        return 100000+5;
	int mid = ss+(se-ss)/2;
    int m1=RMQUtil(2*i+1,ss, mid, qs, qe);
    int m2=RMQUtil(2*i+2,mid+1, se, qs, qe);
    if(level[m1]<=level[m2])return m1;
    else return m2;
}
void dfs(int i)
{
	euler.ps(i);
	visited[i]=1;
	int siz=graph[i].size();
	for(int x=0;x<siz;++x)
	{
		if(visited[graph[i][x]]==0)
		{
			level[graph[i][x]]=level[i]+1;
			dfs(graph[i][x]);
			euler.ps(i);
		}
	}
}
int main()
{
	level[100000+5]=100000+5;
	cin>>n;
	int a,b;
	for(int i=1;i<n;++i)
	{
		cin>>a>>b;
		graph[a].ps(b);
		graph[b].ps(a);
	}
	level[1]=1;
	dfs(1);
	int siz=euler.size();
	for(int i=0;i<siz;++i)
	{
		if(visited[euler[i]]==1)
		{
			visited[euler[i]]=0;
			occ[euler[i]]=i;

		}
	}
	construct_RMQ(0,0,siz-1);
	while(1)
	{
		int a,b;
		cin>>a>>b;
		if(occ[a]>occ[b])swap(a,b);
		cout<<RMQUtil(0,0,siz-1,occ[a],occ[b])<<endl;
	}
}

