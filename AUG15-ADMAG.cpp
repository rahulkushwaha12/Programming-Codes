#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int n,count=0,next=0,last=1,sum,flag=0;
		cin>>n;
		if(n==1)
		cout<<1<<endl;
		else
		{
				while(next<=n)
		     {
		     	//cout<<last<<' ';
		      if(last==n)
		      {
		      	flag=0;
		      	break;
		      }
		      
		      if(last>n)
		      {
		      	flag=1;
		      	break;
		      }
		      
		      count++;
		      sum=next+last;
		      next=last;
		      last=sum;
		     }
		     if(flag==0)
			cout<<count<<endl;
			else
			cout<<count-1<<endl;
		}
		
	}
	return 0;
}
