#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull calc(int low, string s,long long int len)
{
	ull n1;
	string s1;
	if((len-low)<19)
	s1=s.substr(low);
	else
	s1=s.substr(low,low+19);
	n1=stoll(s1);
	return n1%495;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ull int len,n1,sum=0;
		long long int i=-1;
		
		string n;
		cin>>n;
		len=n.length();
		if(len<19)
		{
			n1=stoll(n);
			if(n1%495==0)
			{
				cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
		else
		{
			while(i<len)
			{
				
				
					sum=sum+calc(i+1,n,len);
				
				i=i+19;
			}
			if(sum%495==0)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
			
		}
		
		
	}
	return 0;
}
