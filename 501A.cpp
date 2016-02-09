//author farzirahu
#include<bits/stdc++.h>
using namespace std;
float points(int p,int t)
{
	int p1,p2;
	p1=(3*p)/10;
	p2=p-((p/250)*t);
	if(p1==p2||(p1==0&&p2==0))
	{
		return p1;
	}
	else if(p1>p2)
	{
		return p1;
	}
	else
	{
		return p2;
	}
		
}
int main()
{
	int a,b,c,d;
	float m,v;
	cin>>a>>b>>c>>d;
	m=points(a,c);
	v=points(b,d);
	if(m==v)
	{
		cout<<"Tie"<<endl;
	}
	else if(m>v)
	{
		cout<<"Misha"<<endl;
	}
	else{
		cout<<"Vasya"<<endl;
	}
	return 0;
}
