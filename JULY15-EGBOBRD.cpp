#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int n,k,i,count=0,left=0;
		cin>>n>>k;
		vector<long long int> bread;
		for(i=0;i<n;i++)
		{
			long long int inp;
			cin>>inp;
			bread.push_back(inp);
		}
		
		for(i=0;i<n;i++)
		{
			
			if(left<k)
			{
				
				if(left>0)
				{
					left=left-1;
				}
				if(left<bread[i])
				{
					if(bread[i]>k)
					{
						bread[i]=bread[i]-left;
						left=0;
						if(bread[i]%k==0)
						{
							count= count+(bread[i]/k);
							left = left+0;
						}
						else
						{
							bread[i]=bread[i]-left;
						    left=0;
							count=count+(bread[i]/k)+1;
							left=left+(k-(bread[i]%k));
						}	
					}
					if(bread[i]<=k)
					{
						bread[i]=bread[i]-left;
						left=0;
						count=count+1;
						left=left+(k-bread[i]);
					}
					
				}
				else
				{
					left=left-bread[i];
				}
				
			}
		}
		cout<<count<<endl;
		
		t--;
	}
	return 0;
}
