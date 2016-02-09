#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,b,i,j;
	ll int count=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	cin>>b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
				if((arr[i]+arr[j])%b==0)
				{
					//cout<<arr[i]<<' '<<arr[j]<<endl;
					count++;
				}
			}
			
		}
	}
	cout<<count<<endl;
	return 0;
	
}
