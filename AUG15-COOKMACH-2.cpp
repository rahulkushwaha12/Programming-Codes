#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,count=0;
		cin>>a>>b;
		while(a!=b)
		{
			if(!(a&(a-1)))
			{
				if(a>b)
				{
				a=a>>1;
					
				}
				else
				{
					a=a<<1;
				
				}
				count++;
			}
			else
			{
				a=a>>1;
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
