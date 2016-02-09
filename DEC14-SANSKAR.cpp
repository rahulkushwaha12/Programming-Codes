#include<bits/stdc++.h>
using namespace std;
int arr1[10];
int fun(int arr2[], int n, int k)
{
	arr1[0]=arr2[0];
	int i=1,z=0;
	while(i<n){
	arr1[i]=arr2[i];
	if(arr1[i-1]==arr1[i])
	{
		
	}
	else{
		l=search()
	}
		
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k,i,sum=0;
		
		cin>>n;
		cin>>k;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		std::sort(arr, arr+n, std::greater<int>());
		p=fun(arr,n,k);
		if(p==1)
		cout<<"yes"<<"\n";
		else
		cout<<"no"<<"\n";
		t--;
	}
	return 0;
}
