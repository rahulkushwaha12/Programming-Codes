#include<bits/stdc++.h>
using namespace std;
#define ll long long

int func(ll int k)
{
	ll int temp=0,temp1;
	if(k==1 || k==2 || k==3 || k==4 || k==5 || k==6 || k==7)
	{
		return k;
		
	}
	else if((k & k-1)==0)
	{
		return -1;
	}
	else if(k%2 !=0)
	{
		temp1=k/2;
		if(temp1%2==0)
		{
			return 3;
		}
		else
		return 1;
	}
	else
	{
		temp=k;
		while(temp!=0)
		{
			if(temp%2==0 && temp>k && ((temp & temp-1)==0)) 
			{
				break;
			}
			temp++;
		}
	
		
		return func(temp-k);

	}
	
}

int main()
{
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	ll int t,p,q;
	cin>>t;
	p=1;
	while(p<=t)
	{
		ll int k,arr[8];
		int q;
		arr[0]=0;
		arr[1]=1;
		arr[2]=1;
		arr[3]=0;
		arr[4]=1;
		arr[5]=1;
		arr[6]=0;
		arr[7]=0;
		
		cin>>k;
		if(k==1)
		cout<<"Case #"<<p<<":"<<' '<<0<<endl;
		else if(k==2)
		cout<<"Case #"<<p<<":"<<' '<<0<<endl;
		else if(k==3)
		cout<<"Case #"<<p<<":"<<' '<<1<<endl;
		else if(k==4)
		cout<<"Case #"<<p<<":"<<' '<<0<<endl;
		else if(k==5)
		cout<<"Case #"<<p<<":"<<' '<<0<<endl;
		else if(k==6)
		cout<<"Case #"<<p<<":"<<' '<<1<<endl;
		else if(k==7){
		
		cout<<"Case #"<<p<<":"<<' '<<1<<endl;
		
	}
		
		else
		{
			q = func(k);
			if(q==-1)
			cout<<"Case #"<<p<<":"<<' '<<0<<endl;
			else
			cout<<"Case #"<<p<<":"<<' '<<arr[q]<<endl;
			
		}
		
		p++;
	}
	
	
	return 0;
}
