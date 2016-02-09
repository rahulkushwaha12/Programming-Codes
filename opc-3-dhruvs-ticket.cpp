#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,count=0;
		cin>>n>>k;
		int arr1[n];
		int arr[100000]={0};
		for(i=1;i<=n;i++)
		{
			cin>>arr1[i];
			//cin>>inp;
			arr[arr1[i]]++;
		}
		arr1[0]=0;
		sort(arr1+1,arr1+n+1);
		/*for(i=1;i<=n;i++)
		{
		cout<<arr1[i]<<endl;
		}*/
		for(i=k;i<=arr1[n];i++)
		{
			if(arr[i]>=k)
			{
				count++;
			}
		}
		cout<<count<<endl;
	//	sort(arr1,arr1.begin(),arr1.end());
		
	}
	return 0;
}
