#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,i=1,j,min;
		cin>>n>>m;
		//cout<<n<<" "<<m;
		//cout<<endl;
		long long int vec[50002] = {0};
		/*for(i=1;i<=n;i++)
		{
			cout<<vec[i]<<" ";
		}
		cout<<endl;*/
		long long int indexl=1,indexr=n;
		i=1;
		while(i<=m)
		{
			if(i%2!=0)
			{
				min=vec[n];
				//indexend=1;
				
				for(j=n-1;j>=1;j--)
				{
					
					if(vec[j]<=min)
					{
						min = vec[j];
						indexr=j;
					}
				
				}
				
				vec[indexr]++;
				/*cout<<indexr<<" "<<vec[indexr];
				cout<<endl;*/
				
			}
			else
			{
				min=vec[1];
				//index=1;
				
				for(j=2;j<=n;j++)
				{
					
					if(vec[j]<=min)
					{
						min = vec[j];
						indexl=j;
					}
				
				}
				
				vec[indexl]++;
			/*	cout<<indexl<<" "<<vec[indexl];
				cout<<endl;*/
			}
			i++;
		//	cout<<"i="<<i<<endl;
			
		}
		/*for(i=1;i<=n;i++)
		{
			cout<<vec[i]<<" ";
		}
		cout<<endl;*/
		if(m%2!=0)
		{
			cout<<indexr<<" ";
		cout<<vec[indexr]-1<<endl;
		}
		
		else
		{
			cout<<indexl<<" ";
		cout<<vec[indexl]-1<<endl;
		}
		
	}
	return 0;
}
