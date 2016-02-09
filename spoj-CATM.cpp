#include<bits/stdc++.h>
using namespace std;

int edge(int xx, int yy,int nn, int mm)
{
	if((xx==1&&(yy>=1&&yy<=mm))||(xx==nn&&(yy>=1&&yy<=mm))||(yy==1&&(xx>=1&&xx<=nn))||(yy==mm&&(xx>=1&&xx<=nn)))
	{
		return 1;
	}
	else
	return 0;
}
int main()
{
	int n,m;
	cin>>n,m;
	int arr[n+1][m+1];
	int vim[n+1][m+1],vic1[n+1][m+1],vic2[n+1][m+1];
	int k;
	cin>>k;
	while(k--)
	{
		int i,j;
		for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			arr[i][j]=0;
			vim[i][j]=0;
			vic1[i][j]=0;
			vic2[i][j]=0;
		}
		int mx,my,c1x,c1y,c2x,c2y;
		cin>>mx>>my>>c1x>>c1y>>c2x>>c2y;
		int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
		queue < pair<int , int > >q;
		vim[mx][my]=1;
		
		vic1[c1x][c1y]=1;
		
		vic2[c2x][c2y]=1;
		
		q.push(make_pair(mx,my));
		q.push(make_pair(c1x,c1y));
		q.push(make_pair(c2x,c2y));
		int c=0;
		int x,y,mcx,mcy,c1cx,c1cy,c2cx,c2cy,nmx,nmy,nc1x,nc1y,nc2x,nc2y;
		while(!q.empty())
		{
			
			pair<int,int> top=q.front();
			q.pop();
			 x=top.first;
			 y=top.second;
			if(c%3==0)
			{
				if(edge(x,y,n,m))
				{
					cout<<"YES"<<endl;
					break;
				}
				 mcx=x;
				 mcy=y;
				
			}
			if((c%2!=0)&&(c%3!=0))
			{
				 c1cx =x;
				 c1cy =y;
			}
			if((c%2!=0)&&(c%3!=0))
			{
				 c2cx =x;
				 c2cy =y;
			}
			for(int p=0;p<=3;p++)
			{
				 nmx = mcx+dir[p][0];
				 nmy = mcy+dir[p][1];
				 nc1x = c1cx+dir[p][0];
				 nc1y = c1cy+dir[p][1];
				 nc2x = c2cx+dir[p][0];
				 nc2y = c2cy+dir[p][1];
				 
				if(nmx<=n&&nmx>=1&&nmy<=m&&nmy>=1 &&vim[nmx][nmy]==0&&nmx!=nc1x&&nmx!=nc2x&&nmy!=nc1y&&nmy!=nc2y)
				{
					q.push(make_pair(nmx,nmy));
					vim[nmx][nmy]=1;
					
				}
				
				if(nc1x<=n&&nc1x>=1&&nc1y<=m&&nc1y>=1 &&vic1[nc1x][nc1y]==0&&nc1x!=nc2x&&nc1y!=nc2y)
				{
					q.push(make_pair(nc1x,nc1y));
					vic1[nc1x][nc1y]=1;
				
				}
				if(nc2x<=n&&nc2x>=1&&nc2y<=m&&nc2y>=1 &&vic2[nc2x][nc2y]==0&&nc1x!=nc2x&&nc1y!=nc2y)
				{
					q.push(make_pair(nc2x,nc2y));
					vic2[nc2x][nc2y]=1;
					
				}
			}
			
			
			c++;
			
		}
		cout<<"NO"<<endl;
		
		
	}
	return 0;
}
