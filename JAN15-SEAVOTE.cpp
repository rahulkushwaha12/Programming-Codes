//author farzirahu

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	
	while(t>0)
	{
		long long int i,n,sum=0,res=0,k=0;
		
		cin>>n;
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]!=0)
			{
				k++;
			}
			sum=sum+arr[i];
		}
		
		res = sum-100;
		if(res<0)
		{
			cout<<"NO"<<endl;
		}
		else if(res==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			if(k<n)
			{
			if(res<k)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}	
			}
			else{
			
			if(res<n)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
			
		}
		t--;
	}
	return 0;
} 
