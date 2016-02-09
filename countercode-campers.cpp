#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,i,j,count=0,temp=1;
	cin>>n>>k;
	vector<long long int> vec;
	for(i=0;i<k;i++)
	{
		long long int inp;
		
		cin>>inp;
		vec.push_back(inp);
	}
	sort(vec.begin(),vec.end());
	for(i=0;i<k;i++)
	{
		for(j=temp;j<vec[i]-1;j=j+2)
		{
			count++;
			
		}
		if(vec[i]+2<=n)
			temp=vec[i]+2;
			else
			break;
	}
	for(i=vec[k-1]+2;i<=n;i=i+2)
	{
		count++;
	}
	
	cout<<count+k<<endl;
	return 0;
}
