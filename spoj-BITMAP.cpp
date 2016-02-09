#include<bits/stdc++.h>
using namespace std;
#define MAX 183
#define INF 99999
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int arr[MAX][MAX];
int vis[MAX][MAX]={INF};
			int bfs(int i, int j, int n,int m)
			{	int k,nx,ny;
				
				queue< pair < int , int > >q;
				vis[i][j]=0;
				q.push(make_pair(i,j));
				int x,y;
				while(!q.empty())
				{
					pair<int,int>top=q.front();
					q.pop();
					x=top.first;
					y=top.second;
					//cout<<arr[x][y]<<endl;
					
					if(arr[x][y]==1)
					return vis[x][y];
					
					for(k=0;k<=3;k++)
					{
						 nx = x+dir[k][0];
						 ny = y+dir[k][1];
						if((nx>=1)&&(nx<=n)&&(ny>=1)&&(ny<=m)&&(vis[nx][ny]==INF))
						{
							q.push(make_pair(nx,ny));
						    vis[nx][ny]=vis[x][y]+1;
						}
						
					}
					
				}
				return INF;
			}
			
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,len,j,k;
		cin>>n>>m;
		
		for(i=1;i<=n;i++)
		{
			string s;
			cin>>s;
			len = s.length();
			for(j=0;j<len;j++)
			{
				arr[i][j+1]=(int)s[j]-48;
				
			}
			
		}
		
		for(i=1;i<=n;i++)
		{
		
			for(j=1;j<=m;j++)
			{
				vis[MAX][MAX]={INF};
				int r=bfs(i,j,n,m);
				cout<<r<<" ";
				
			}
			cout<<endl;
		
		}
	}
	return 0;
}
