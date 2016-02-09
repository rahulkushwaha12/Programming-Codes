#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		vector<int> vec;
		int n,i,k,sum=0;
		cin>>n>>k;
		
		for(i=0;i<n;i++)
		{	int inp;
			cin>>inp;
			vec.push_back(inp);
			sum = sum+inp;
		}
		
		int p=k;
		while(p>0)
		{
			
			
			vec.push_back(sum+1);
		
			sum=sum+sum+1;
			p--;
		}
		
		
		if(vec[(n+k)-1]%2==0)
		{
			cout<<"even"<<endl;
		}
		else
		cout<<"odd"<<endl;
		t--;
	}
	return 0;
}
