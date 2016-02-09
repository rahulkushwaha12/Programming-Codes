#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t>0)
	{
		long long int n,d,r,l,i,sum=0;
		cin>>n>>d;
		vector<long long int> ele;
		for(i=0;i<n;i++)
		{
			long long int inp;
			cin>>inp;
			ele.push_back(inp);
		}
		sort(ele.rbegin(),ele.rend());
		i=1;
		while(i<n)
		{
			l=ele[i-1]-ele[i];
			if(i+1<n)
			{
			
			r=ele[i]-ele[i+1];
			
		    }
		    else
		    r=d;
		    
			if(l<d)
			{
			
				sum=sum+ele[i]+ele[i-1];
				//cout<<sum<<endl;
				i=i+2;
				
			    
			}
			else if(r<d)
			{
			    
				sum=sum+ele[i]+ele[i+1];
				//cout<<sum<<endl;
				i=i+3;
			}
			else
			{
				i=i+2;
			}
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
}
