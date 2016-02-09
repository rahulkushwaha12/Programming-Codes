#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[100005];
		scanf("%s",s);
		long long int len,i=0,p;
		len=strlen(s);
	//	cout<<len<<endl;
		p=0;
		while(i<len)
		{
			
			p=((p*10)%495+(s[i]-'0')%495)%495;
			//cout<<p<<endl;
			i++;
		}
		if(p==0)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	return 0;

}
