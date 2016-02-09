#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int n,h,count=0,sum=0,highercount=0,lowercount=0,min=0,i,j,low1,high1;
		cin>>n>>h;
		vector<int> low;
		vector<int> high;
		//vector<int> final;
		for(i=0;i<n;i++)
		{
			cin>>low1>>high1;
			low.push_back(low1);
			high.push_back(high1);
			
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<h;j++)
			{
				if(j>=low[i]&&j<=high[i])
				{
					continue;
				}
				else
				count++;
			}
		}
		//cout<<count<<endl;
		sum=count;
		min=sum;
	//	final.push_back(count);
		count=0;
		for(i=1;i<=(n-h);i=i++)
		{
			for(j=0;j<n;j++)
			{
				if((i-1)>=low[j]&&(i-1)<=high[j])
				{
					continue;
				}
				else
				lowercount++;
			}
			//cout<<"lower"<<lowercount<<endl;
			for(j=0;j<n;j++)
			{
				if((i+(h-1))>=low[j]&&(i+(h-1))<=high[j])
				{
					//continue;
				}
				else
				highercount++;
			}
			//cout<<"higher"<<highercount<<endl;
			sum=sum+(highercount-lowercount);
			//cout<<sum<<endl;
			if(min>sum)
			min=sum;
			lowercount=highercount=0;
			
		}
		cout<<min<<endl;
	}
	return 0;
}
