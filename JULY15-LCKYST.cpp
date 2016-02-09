#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	long long int i;
	cin>>n;
	vector<long long int> arr;
	for(i=0;i<n;i++)
	{
		long long int inp;
		cin>>inp;
		arr.push_back(inp);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%5==0)
		{
			long long int count5=0,count2=0,temp;
			temp=arr[i];
			while(temp!=0)
			{
				if(temp%5==0)
				{
					
					temp=temp/5;
					count5++;
				}
				if(temp%2==0)
				{
					
					temp=temp/2;
					count2++;
				}
				else
				{
					break;
				}
				
				
			}
			/*if(arr[i]%2==0)
			{
				temp=arr[i];
				while(temp!=0)
				{
					if(temp%2==0)
					{
						count2++;
					}
					temp=temp/2;
				}
			}*/
			/*cout<<count5<<endl;
			cout<<count2<<endl;*/
			long long int rem=0;
			if(count5==count2)
			{
				
				cout<<arr[i]<<endl;
			}
			else if(count5>count2)
			{
				
				rem=count5-count2;
				
				if(rem%2==0)
				{
					cout<<arr[i]*(rem/2)*4<<endl;
				}
				else
				{
					cout<<arr[i]*((rem+1)/2)*4<<endl;
				}
			}
			else
			{
				
				cout<<arr[i]<<endl;
			}
		}
		else
		{
			cout<<arr[i]<<endl;
		}
	}
	return 0;
}
