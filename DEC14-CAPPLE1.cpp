#include<bits/stdc++.h>
using namespace std;
int fun(int arr1[], int size, int k)
{
	int i,j,m,temp,flag=0;
		 //std::sort(arr1, arr1+size, std::greater<int>());
	for(i=0;i<size;i++)
	{
		if(arr1[i]==arr1[0])
		flag++;
		else
		break;
	
	}
	
	if(flag==size)
	{
	k++;
	//printf("%d\n",k);
	return k;
	}
	else
	{
	for(i=0;i<flag;i++)
	{
		m=flag;
		/*if(m>=size)
		{
			m=size-1;
		}*/
		arr1[i]=arr1[m];
	}	
	k++;
	return fun(arr1,size,k);
	}
	
}
int main()
{
	int i,j,temp,t,time,k=0;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		
		}
		std::sort(arr, arr+n, std::greater<int>());
		
		time = fun(arr,n,k);
		cout<<time<<"\n";
		
		t--;
	}
	return 0;
}

	
