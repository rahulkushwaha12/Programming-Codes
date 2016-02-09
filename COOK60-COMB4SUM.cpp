#include<bits/stdc++.h>
using namespace std;

void sum(vector<long long int>& vec, long long int n1, int loop)
{
	
}
int total(long long int a,long long int b,long long int c,long long int d)
{
	long long int s=0;
	if((a+b-c-d)<0)
	s=s+(-(a+b-c-d));
	else
	s=s+(a+b-c-d);
	
	if((a+c-b-d)<0)
	s=s+(-(a+c-b-d));
	else
	s=s+(a+c-b-d);
	
	if((a+d-b-c)<0)
	s=s+(-(a+d-b-c));
	else
	s=s+(a+d-b-c);
//	|a+b-c-d| + |a+c-b-d| + |a+d-b-c| + |c+d-a-b| + |b+d-a-c| + |b+c-a-d|
	if((c+d-a-b)<0)
	s=s+(-(c+d-a-b));
	else
	s=s+(c+d-a-b);
	
	if((b+d-a-c)<0)
	s=s+(-(b+d-a-c));
	else
	s=s+(b+d-a-c);
	
	if((b+c-a-d)<0)
	s=s+(-(b+c-a-d));
	else
	s=s+(b+c-a-d);
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n,i,j,k,l,sum=0;
		cin>>n;
		vector<int> vec;
		for(i=0;i<n;i++)
		{
			long long int inp;
			cin>>inp;
			vec.push_back(inp);
		}
		int loopno=0;
		sum(vec, n, loopno);
		/*for(i=0;i<n-3;i++)
		{
			for(j=i+1;j<n-2;j++)
			{
				for(k=j+1;k<n-1;k++)
				{
					for(l=k+1;l<n;l++)
					{
						//cout<<vec[i]<<vec[j]<<vec[k]<<vec[l];
						//cout<<endl;
						sum=sum+total(vec[i],vec[j],vec[k],vec[l]);
					}
				}
			}
		}
		cout<<sum<<endl;*/
		t--;
	}
	return 0;
}
