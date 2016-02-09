#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int n,i;
	cin>>n;
	
	ll int cnegative=0,cpositive=0,czero=0,cevennegative=0,cevenpositive=0,inp,pair1=0,pair2=0,pair3=0;
	for(i=0;i<n;i++)
	{
		cin>>inp;
		if(inp==0)
		czero++;
		else if(inp>0)
		{
			cpositive++;
			if(inp%2==0)
			cevenpositive++;
		}
		else
		{
			cnegative++;
			if(((-1)*inp)%2==0)
			cevennegative++;
		}
	}
	pair1=(cevennegative*(cnegative-1))-((cevennegative*(cevennegative-1))/2);
	pair2=(cevenpositive*(cpositive-1))-((cevenpositive*(cevenpositive-1))/2);
	pair3=(czero*((cpositive+cnegative+czero)-1))-((czero*(czero-1))/2);
	cout<<pair1+pair2+pair3<<endl;
	return 0;
	
}
