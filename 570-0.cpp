#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int n,m,i,j,max=0,temp=0;
	cin>>n>>m;
	ll int arr[n][m];
	ll int city[n+1];
	for(i=0;i<n+1;i++)
	{
		city[i]=0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
			
		}
	}
	for(i=0;i<m;i++)
	{
		max=arr[i][0];
		temp=0;
		for(j=1;j<n;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
				temp=j;
			}
			
			
		}
		city[temp+1]++;
	}
	max=city[1];
	temp=1;
	for(j=1;j<n+1;j++)
		{
			if(max<city[j])
		{
			max=city[j];
			temp=j;
		}
			
		}
		cout<<temp<<endl;
	
	return 0;
}
