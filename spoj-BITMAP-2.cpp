#include<bits/stdc++.h>
using namespace std;
#define MAX 183
#define INF 999999;
int arr[183][183];
int vis[183][183];
int minn;
int bfs(int n,int m, int i, int j)
{
	int k;
	int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
	queue< pair< int ,int > >q;
	vis[i][j]=1;
	q.push(make_pair(i,j));
	while(!q.empty())
	{
		pair<int,int>top=q.front();
		q.pop();
		int x=top.first;
		int y=top.second;
		if(arr[x][y]==1)
		{
			int d=abs(i-x)+abs(j-y);
			if(d<minn)
			{
				minn=d;
				
			}
		}
		for(k=0;k<8;k++)
		
		{
			int nx=x+dir[k][0];
			int ny=y+dir[k][1];
			if(!vis[nx][ny]&&nx>=1&&nx<=n&&ny>=1&&ny<=m)
			{
				q.push(make_pair(nx,ny));
				vis[nx][ny]=1;
			}
		}
	}
	return minn;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		queue< pair< int , int > >q;
		arr[MAX][MAX]={0};
		int n,m;
		cin>>n>>m;
		int i,j;
		for(i=1;i<=n;i++)
		{
			string s;
			cin>>s;
			for(j=0;j<m;j++)
			{
				arr[i][j+1]=(int)s[0]-48;
			}
		}
		for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			vis[i][j]=-1;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(arr[i][j]==1)
				vis[i][j]=0;
				
				
			}
			
		}
	}
	
	return 0;
}
