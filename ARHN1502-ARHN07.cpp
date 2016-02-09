// author farzirahu
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int p,i,c=0,l1,l2;
		char str1[1000000],str2[1000000];
		cin>>str1>>str2;
		l1=strlen(str1);
		l2=strlen(str2);
		p=strcmp(str1,str2);
		if(p==0&&l1==l2)
		{
			cout<<"0"<<endl;
		}
		else if(p!=0&&l1==l2)
		{
			for(i=0;i<l1;i++)
			{
				if((int)str1[i]!=(int)str2[i])
				{
					c++;
				}
			}
			cout<<c<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
		
		t--;
	}
	return 0;
}
