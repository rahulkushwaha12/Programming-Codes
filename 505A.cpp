#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,l,flag=0;
	string s;
	cin>>s;
	l=s.size();
	//cout<<l<<endl;
	flag==0;
	if(l==1)
	{
		cout<<s<<s<<endl;
	}
	else
	{
	
	for(i=0;i<l/2;i++)
	{
		if(s[i]==s[l-i-1])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		flag=0;
		for(i=0;i<l-1;i++)
	{
		if(s[i]==s[i+1])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
		if(flag==1)
		{
			cout<<s<<s[0]<<endl;
		}
		else
		{
			cout<<"NA"<<endl;
		}
	}
	else
	{
	flag=0;
		for(i=0;i<l/2;i++)
		{
			if(s[i+1]==s[l-i-1])
			{
				flag=1;
				//cout<<s[i+1]<<" "<<cout<<s[l-i-1]<<endl;
			}
			else
			{
				flag=0;
				break;
			}
			
		}
		
		if(flag==1)
		{
			cout<<s<<s[0]<<endl;
		}
		else
		{
			flag=0;
			for(i=0;i<l/2;i++)
		{
			if(s[i]==s[l-i-2])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<s[l-1]<<s<<endl;
		}
		else
		{
			cout<<"NA"<<endl;
		}
			
		}
	}}
	return 0;
}
