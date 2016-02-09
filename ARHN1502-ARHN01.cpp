//author farzirahu
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a==0&&b==0&&c==0)
	{
		return 0;
	}
	else
	{
		if((b-a)==(c-b))
		{
			cout<<"AP ";
			cout<<c+(c-b)<<endl;
		}
		else
		{
			cout<<"GP ";
			cout<<(c*c)/b<<endl;
		}
		main();
	}
	
}
