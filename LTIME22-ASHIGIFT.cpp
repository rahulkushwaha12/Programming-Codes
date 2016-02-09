#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int c[n],i,s=0,flag=0;
		for(i=0;i<n;i++)
		{
			cin>>c[i];
			if(c[i]>=n)
			{
				flag=1;
			}
			s=s+c[i];
		}
		if(n==1){
			
			cout<<"-1"<<endl;
		
		
			
		}
		else{
		
		if(s>n || flag==1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(i=2;i<=n;i++)
				{
					cout<<i;
					cout<<" ";
				}
				cout<<"1";
		}
	}
		t--;
	}
	return 0;
}
