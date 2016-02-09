#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector< vector<int> > vec;
	
	int r,c,i,j,l;
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		vector<int>temp;
		for(j=0;j<c;j++)
		{
			int ins;
			cin>>ins;
			temp.push_back(ins);
			
		}
		vec.push_back(temp);
	}
	
	int c1=c;
	int r1=r;
	int k1=0;
	i=0;
	j=c-1;
	l=r-1;
	while(j>0&&l>0)
	{
		for(int k=k1;k<c1;k++)
		{
			cout<<vec[i][k]<<" ";
		}
		for(int k=k1+1;k<r1;k++)
		{
			cout<<vec[k][j]<<" ";
		}
		for(int k=c1-2;k>=k1;k--)
		{
			cout<<vec[l][k]<<" ";
		}
		for(int k=r1-2;k>k1;k--)
		{
			
			cout<<vec[k][i]<<" ";
		}
		i++;j--;l--;
		k1++;
		c1--;r1--;
	}
	
	return 0;
}
