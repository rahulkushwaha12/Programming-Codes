#include<bits/stdc++.h>
#define ll long long
using namespace std;
float prob(float pp[],long long int n,long long int k)
{
	if(n==0||k==-1)
	{
		return 0.00;
	}
	else
	{
		if(n==1&&k==1)
		return pp[1];
		if(k>n)
		return 0.00;
		if(k==0&&n==1)
		return 1.00-pp[1];
		else
	    return (prob(pp,n-1,k)*(1.00-pp[n]))+(prob(pp,n-1,k-1)*pp[n]);
	}
	
	
}
int main()
{
	ll int t,l;
	cin>>t;
	l=t;
	while(t--)
	{
		ll int n,k,i;
		float ans=0.00;
		cin>>n>>k;
		float p[n];
		for(i=1;i<=n;i++)
		{
			cin>>p[i];
		}
		ans=prob(p,n,k);
		printf("Case %d: %0.2f\n",(l-t),ans);
	}
	return 0;
}
