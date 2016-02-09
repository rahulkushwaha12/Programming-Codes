#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll int t,j;
	char arr[27];
	for(j=1;j<27;j++)
	{
		arr[j]=96+j;
		
	}
	//cout<<arr[1]<<arr[2]<<arr[26]<<endl;

	cin>>t;
	while(t--)
	{
		ll int n,k,i,j,l,p=0,s=0;
		ll int hash[27]={0};
		cin>>n>>k;
		l=k;
		for(i=1;i<=k;i++)
		{
			if(i%2==0)
			{
				if((n-l+1)%2==0)
				{
					p=n-l+1;
				}
				else
				p=n-l;
				if(p==0)
				{
					p=1;
				}
				hash[i]=p;
			}
			else
			{
				if((n-l+1)%2==0)
				{
					p=n-l;
					
				}
				else
				p=n-l+1;
				if(p==0)
				{
					p=1;
				}
				hash[i]=p;
			}
			n=n-p;
			l--;
		
			
		}
		
		if(!n)
		{
			for(i=1;i<=k;i++)
			{
				for(j=1;j<=hash[i];j++)
				{
					cout<<arr[i];
				}
			}
			cout<<endl;
		}
		else
		cout<<"No such string."<<endl;
		
		
	}
	return 0;
}
