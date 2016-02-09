#include<bits/stdc++.h>
using namespace std;

long long int lookup[1000000]={-1};
int check(int aa,int bb,int count)
{

	if(lookup[aa]==-1)
	{
	
	if(aa==bb)
	return count;
	else if(aa%2==0)//even
	{
		if(aa<bb)
		{
			aa=aa*2;
		}
		else
		{
			aa=aa/2;
		}
		count++;
		lookup[aa]=check(aa,bb,count);
		
		return check(lookup[aa],bb,count);
	}
	else//odd
	{
		if(aa<bb)
		{
			if(aa==1)
			aa=aa*2;
			else
			aa=(aa-1)/2;
		}
		else
		{
			aa=(aa-1)/2;
		}
		count++;
		lookup[aa]=check(aa,bb,count);
		return check(lookup[aa],bb,count);
	}}
	else
	{
		return lookup[aa];
	}
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c=0;
		cin>>a>>b;
		
		
		cout<<check(a,b,c)<<endl;
	}
	return 0;
}
