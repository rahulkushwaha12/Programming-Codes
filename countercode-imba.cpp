#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,p,i;
		cin>>n;
		
		vector<long long int> vec;
		p=n;
		for(i=1;i<=p;i++)
		{
			vec.push_back(p);
			vec.push_back(i);
			p--;
		}
		for(i=n-1;i>=0;i--)
		{
			cout<<vec[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
