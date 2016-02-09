#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,hash[2001],i,j,a,b,s=0,sum=0,count=1,last=0;
		for(i=0;i<=2001;i++)
		{
			hash[i]=0;
		}
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			count=1;
			for(j=a;j<=b;j++)
			{
	
				hash[j]++;
				if(hash[j]>=2&&a!=last)
				{
					count=0;
				}
				last=b;
				
				
				
			}
			
			if(count==1){
				sum=sum+1;
			}
		
			
		}
		
		
		cout<<sum<<endl;
		
		t--;
	}
	return 0;
}
