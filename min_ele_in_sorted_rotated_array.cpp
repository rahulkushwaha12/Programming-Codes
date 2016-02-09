#include<bits/stdc++.h>
using namespace std;

	int binarysearch(int arr[], int l, int r)
	{
		int m;
		if(l<r)
		{
			m=l+(r-l)/2;
			if(arr[m]>arr[r])
			{
				if(arr[m]>arr[m+1])
				return arr[m+1];
				else
				{
					l=m+1;
				
				return binarysearch(arr,l,r);
				}
				
			}
			else
			{
			if(arr[m]<arr[m-1])
			return arr[m];
			else
			{
				r=m-1;
			return binarysearch(arr,l,r);
			}
				
			}
		}
		return arr[0];
	}
	
	
	int main()
	{
		int arr[100000],size;
		cout<<"enter the size of array"<<endl;
		cin>>size;
		int i,l,r;
		cout<<"enter array"<<endl;
		for(i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		l=0;
		r=size-1;
		int result = binarysearch(arr,l,r);
		cout<<result<<endl;
	return 0;
}
