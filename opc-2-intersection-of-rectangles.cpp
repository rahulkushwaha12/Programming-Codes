#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr1[4],arr2[4],arr3[4],res[4],temp=0,i;
		for(i=0;i<4;i++)
		{
			cin>>arr1[i];
		}
		for(i=0;i<4;i++)
		{
			cin>>arr2[i];
		}
		for(i=0;i<4;i++)
		{
			cin>>arr3[i];
		}
		if(arr1[0]>arr1[2])
		swap(arr1[0],arr1[2]);
		if(arr1[1]>arr1[3])
		swap(arr1[1],arr1[3]);
		
		if(arr2[0]>arr2[2])
		swap(arr2[0],arr2[2]);
		if(arr2[1]>arr2[3])
		swap(arr2[1],arr2[3]);
		
		if(arr3[0]>arr3[2])
		swap(arr3[0],arr3[2]);
		if(arr3[1]>arr3[3])
		swap(arr3[1],arr3[3]);
		
		for(i=0;i<2;i++)
		{
			if(temp<arr1[i])
			temp=arr1[i];
			if(temp<arr2[i])
			temp=arr2[i];
			if(temp<arr3[i])
			temp=arr3[i];
			res[i]=temp;
			temp=0;
		
		}
		temp=arr1[2];
		for(i=2;i<4;i++)
		{
			if(temp>arr1[i])
			temp=arr1[i];
			if(temp>arr2[i])
			temp=arr2[i];
			if(temp>arr3[i])
			temp=arr3[i];
			res[i]=temp;
			temp=arr1[3];
			
		}
		
		
		
		
		cout<<(res[2]-res[0])*(res[3]-res[1])<<endl;
	}
	return 0;
}
