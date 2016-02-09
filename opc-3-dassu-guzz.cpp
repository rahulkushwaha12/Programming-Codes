#include<bits/stdc++.h>
#define ll long long
using namespace std;

int func(int low,int high,int arr[],int n)
{
	ll int i,min=0;
	min=arr[low];
	for(i=low+1;i<=high;i++)
	{
		if(min>arr[i])
		min=arr[i];
		
	}
	return min*(high-low+1);
}
int main()
{
	ll int n,max=0,sum=0,i,j,low,high;
	cin>>n;
	ll int arr[n];
	for(i=1;i<=n;i++)
	
	{
		cin>>arr[i];
	}
	max=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			sum=func(i,j,arr,n);
			if(max<sum)
			{
				max=sum;
				low=i;
				high=j;
				
			}
		}
	}
	cout<<low<<' '<<high<<endl;
	return 0;
}
