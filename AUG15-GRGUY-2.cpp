#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int count=0,i,point=0,len,flag=0,j,c1=0,c2=0;
		string l1,l2;
		cin>>l1>>l2;
		len=l1.length();
		i=0;
		if(l1[0]==l2[0])
		{
			if(l1[0]=='#')
			{
				flag=1;
				
			}
			else
			{
			
				for(j=1;j<len;j++)
				{
					if(l1[j]=='.')
					c1++;
					else
					break;
				}
			
			
				for(j=1;j<len;j++)
				{
					if(l2[j]=='.')
					c2++;
					else
					break;
				}
			
			if(c1>=c2)
			{
				point=1;
			}
			else
			point=2;
			}
		}
		else
		{
			
			if(l1[0]=='#')
			{
				point=2;
			}
			else
			point=1;
			
	}
		if(flag==0)
		{
			for(i=1;i<len;i++)
			{
				if(l1[i]==l2[i])
				{
					if(l1[i]=='#')
					{
						break;
					}
					else
					{
						//i++;
					}
					
					
				}
				else
				{
					if(l1[i]=='.'&&l2[i]=='#')
					{
						if(point==1)
						{
							point=1;
						}
						else
						{
							count++;
							point=1;
						}
					}
					else
					{
						if(point==2)
						{
							point=2;
						}
						else
						{
							count++;
							point=2;
						}
					}
				}
				
			}	
		}
			
		
	    //cout<<i<<endl;
		if(i<len)
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
