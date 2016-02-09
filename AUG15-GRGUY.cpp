#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int count=0,i,point=0,len;
		string l1,l2;
		cin>>l1>>l2;
		len=l1.length();
		i=0;
		for(i=0;i<len;i++)
		{
			if(i==0&&l1[i]==l2[i]&&l1[i]=='#')
			{
				
				break;
			}
			else if(i==0&&l1[i]!=l2[i]&&((l1[i]=='#'&&l2[i]=='.')||(l1[i]=='.'&&l2[i]=='#')))
			{
				if((l1[i]=='.'&&l2[i]=='#'))
				{
					point=1;
					
				}
				else
				point=2;
				
				
				
			}
			else if(l1[i]!=l2[i]&&l1[i]==l1[i-1]&&l2[i]==l2[i-1]&&l1[i]=='.')
			{
				point=1;
				continue;
			}
			else if(l1[i]!=l2[i]&&l1[i-1]=='#'&&l2[i-1]=='#'&&l1[i]=='.')
			{
				if(point==1)
				break;
				
				else
				{
					point=1;
					count++;
				}
				
			}
			else if(l1[i]!=l2[i])
			{
				if(l1[i]=='.')
				point=1;
				if(l2[i]=='.')
				point=2;
				count++;
			}
			else if(l1[i]==l2[i]&&l1[i]=='#')
			{
				break;
			}
			else if(l1[i]==l2[i])
			{
				continue;
			}
			
			
			
		}
		if(i<(len-1))
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
			cout<<count<<endl;
		}
	
		
	}
	return 0;
	
}
