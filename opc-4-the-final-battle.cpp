#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string n;
	cin>>n;
	int k;
	cin>>k;
	ll int len,c=0,i,pos;
	len = n.length();
	if(k==1)
	{
		cout<<len<<endl;
	}
	else if(k==2)
	{
		for(i=0;i<len-1;i++)
		{
			pos=i;
			while(n.find(n[i],pos+1)!=len-1)
			{
				pos=n.find(n[i],pos+1);
				c++;
			}
			
			
		}
		cout<<c<<endl;
		c=0;
	}
	
	else
	{
		for(i=0;i<len-2;i++)
		{
			pos=i;
			while(n.find(n[i],pos+1)!=len-1)
			{
				pos=n.find(n[i],pos+1);
				c++;
			}
			
			
		}
		cout<<c<<endl;
		c=0;
	}
	
	return 0;
}
