//author farzirahu
#include<stdio.h>
int fun(int arr1[], int size, int k)
{
	int i,j,temp,flag=0;
		for(i=0;i<size;i++)
		for(j=i+1;j<size;j++)
		{
			if(arr1[i]<arr1[j])
			{
				temp = arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	for(i=0;i<size;i++)
	{
		if(arr1[i]==arr1[0])
		flag++;
	
	}
	
	if(flag==size)
	{
	k=k+1;
	return k;
	}
	else
	{
	for(i=0;i<flag;i++)
	{
		arr1[i]=arr1[flag+i];
	}	
	k=k+1;
	fun(arr1,size,k);
	}
	
}
int main()
{
	int i,j,temp,t,time,k=0;
	scanf("%d",&t);
	while(t>0)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		
		}
		
		
		time = fun(arr,n,k);
		printf("%d\n",time);
		
		t--;
	}
	return 0;
}
