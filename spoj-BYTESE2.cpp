#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,l=0,f=0,i,c=0;
		cin>>n;
		vector< pair<long long int,long long int> > vec;
		vector< pair<long long int,long long int> >::iterator it;
		for(i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			vec.push_back(make_pair(a,b));
		}
		sort(vec.begin(),vec.end());
		/*	for(it=vec.begin(); it!=vec.end();++it)
		{
			cout<<it->first<<' '<<it->second<<endl;
			
		}*/
	it=vec.begin();
	l=it->second;
	//cout<<l<<endl;
	it=vec.end();
	it--;
	f=it->first;
//	cout<<f<<endl;
	
		for(it=vec.begin(); it!=vec.end();++it)
		{
			if((f>=it->first)&&(l<=it->second))
			{
				c++;
			}
		}
		cout<<c<<endl;
		
	}
	return 0;
}
