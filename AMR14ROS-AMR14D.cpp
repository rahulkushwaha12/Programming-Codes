//author farzirahu
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,i,a,flag=0;
		cin>>n;
		vector<int> v;
		for(i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n-1;i++)
		{
			if(v[i]==v[i+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		t--;
	}
	return 0;
}

