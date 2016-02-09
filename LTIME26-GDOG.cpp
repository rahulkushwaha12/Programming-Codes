#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int max=0,temp;
		while(k!=0)
		{
			
				temp = n%k;
				if(temp>max)
				{
					max=n%k;
					k--;
				}
				
				else
				break;	
			
		}
		cout<<max<<endl;
	}
	return 0;
}
