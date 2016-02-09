#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int t;
	cin>>t;
	while(t>0)
	
	{
		long long int n,k,l,temp,op,i,op1;
		cin>>n>>k>>l;
		for(i=n;i>=2;i--)
		{
			temp = pow(k,(i-1));
			if(l%temp==0)
			{
				/*if(l==1)
				{
				    op = (l/temp)+1;	
				}
				else
				{
					op = l/temp;
				}*/
				op = l/temp; 
				
			}
			else
			{
			   op = (l/temp)+1; 
			}
			op1 = op%k;
			if(op1==0)
			{
				cout<<k<<" ";
			}
			else
			{
				cout<<op1<<" ";
			}
			
		}
		if(l%k == 0)
		{
		 cout<<k;
		}
		else
		{
		cout<<l%k;	
		}
		
		cout<<endl;
		t--;
	}
	
	return 0;
}
