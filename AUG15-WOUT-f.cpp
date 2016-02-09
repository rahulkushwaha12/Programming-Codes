#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,h,i,j,a,b,max=0,sum=0,up;
		cin>>n>>h;
		
		//vector<vector<int> > vec(1000000,vector<int> (2,0));
		int vec[1000000][2]={0};
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			vec[a][0]++;
			vec[b][1]++;
			
		}
		up=0;
		for(i=0;i<n-1;i++)
		{
			up=vec[i][0]-vec[i][1];
			vec[i+1][0]=vec[i+1][0]+up;
			
		}
	/*	for(i=0;i<n;i++)
		{
			cout<<vec[i][0]<<endl;
			
		}*/
		for(j=0;j<h;j++)
		{
			sum=sum+vec[j][0];
				
		}
		
		max=sum;
		
		for(i=0;i<(n-h);i++)
		{
			sum=sum-vec[i][0]+vec[i+h][0];
			
			if(max<sum)
			{
				max=sum;
				
		    }
		
		
		}
		cout<<(h*n)-max<<endl;
	}
	return 0;
} 
