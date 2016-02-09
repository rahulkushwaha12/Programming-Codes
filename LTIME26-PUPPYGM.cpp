#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int count=1;
		
		while(a!=0||b!=0)
		{
			if(a%2==0)
			{
				
					b--;
					a=a/2;
					count++;
				
				
			}
			else if(b%2==0)
			{
				a--;
				b=b/2;
				count++;
			}
			
			else
			{
				count--;
				break;
			}
			
		}
		if(count%2==0)
		{
			cout<<"Vanka"<<endl;
		}
		else
		{
			cout<<"Tuzik"<<endl;
		}
		
	}
	return 0;
}
