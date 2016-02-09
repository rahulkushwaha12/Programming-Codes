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
		ll int n,k,i,j,z=0,m=0,count=0,flag=0;
		ll int hash[27]={0};
		cin>>n>>k;
		
		for(i=1;i<=k;i++)
		{
			if(i%2==0)
			hash[i]=2;
			else
			hash[i]=1;
			count=count+hash[i];
		}
		m=n-count;
		if(m<0)
	    cout<<"No such string."<<endl;
		else
		{
				for(i=1;i<=k;i++)
				{
					if(m==0)
					break;
					if(i%2==0)
					{
						if(m%2==0)
						z=m;
						else
						flag=1;
						hash[i]=hash[i]+z;
					}
					else
					{
						if(m%2==0)
						z=m;
						else
						flag=1;
						hash[i]=hash[i]+z;
					}
					m=m-z;
					
				}
				if(flag==1)
				{
					cout<<"No such string."<<endl;
				}
				else
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
		}
		
	
		
		
		
		
	}
	return 0;
}
