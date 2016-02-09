#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int m,x,y,s,q,p,l,j,i,count=0;
		cin>>m>>x>>y;
		vector<int>  roo(101,0);
		vector<int> cops;
		s=x*y;
		for(i=0;i<m;i++)
		{
			int room;
			cin>>room;
			cops.push_back(room);
		}
		for(i=0;i<m;i++)
		{
			
			q=cops[i];
			if((q-s)<1)
			p=1;
			else
			p=q-s;
			if((q+s)>100)
			l=100;
			else
			l=q+s;
			for(j=p;j<=l;j++)
			{
				roo[j]=1;
			}
			
			
		}
		for(i=1;i<=100;i++)
		{
			if(roo[i]==0)
			count++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}
