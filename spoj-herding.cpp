#include<bits/stdc++.h>
using namespace std;
int n,m;
char arr[1000000][1000000];
int check(char z, int x,int y)
{
	
}
int main()
{
	int c=0,i,j;
	cin>>n>>m;
	//char arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(arr[i][j]=='E'&& arr[i][j+1]=='W')
			{
				arr[i][j]='0';
				arr[i][j+1]='0';
				c++;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j][i]=='S'&& arr[j+1][i]=='N')
			{
				arr[j][i]='0';
				arr[j+1][i]='0';
				c++;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<m/2;j++)
		{
			if(arr[i][j]=='E')
			{
				flag=check(arr[i][j],i,j);
				if(flag==1)
				{
					c++;
				}
			}
			if(arr[i][j]=='W')
			{
				flag=check(arr[i][j],i,j);
				if(flag==1)
				{
					c++;
				}	
			}
			if(arr[i][j]=='N')
			{
				flag=check(arr[i][j],i,j);
				if(flag==1)
				{
					c++;
				}
			}
			if(arr[i][j]=='S')
			{
				flag=check(arr[i][j],i,j);
				if(flag==1)
				{
					c++;
				}
			}
		}
	}
	
	cout<<c<<endl;
	return 0;
}
