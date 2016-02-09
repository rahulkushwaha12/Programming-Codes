#include<bits/stdc++.h>
using namespace std;

void merge(int l[],int r[],int len1,int len2,int a[])
{
	
	
	
	int i=0,j=0,k=0;
	while(i<len1&&j<len2)
	{
		if(l[i]<=r[j])
		{
			a[k]=l[i];
			k++;i++;
		}
		else
		{
			a[k]=r[j];
			k++;j++;
		}
	}
	while(i<len1)
	{
		a[k]=l[i];
		k++;i++;
	}
	while(j<len2)
	{
		a[k]=r[j];
		k++;j++;
	}
}
void mergesort(int p[],int n)
{
	
	if(n<2)
	{
		
		return;
	}
	int mid=n/2;
	
	int l[mid],r[n-mid];
	for(int i=0;i<mid;i++)
	{
		
		l[i]=p[i];
	}
	int j=0;
	for(int k=mid;k<n;k++)
	{
		
		r[j]=p[k];j++;
	}
	
	mergesort(l,mid);
	
	mergesort(r,n-mid);
	merge(l,r,mid,n-mid,p);
}
int main()
{
	int len;
	cin>>len;
	int a[len];
	for(int i=0;i<len;i++)
	{
		cin>>a[i];
	}
	mergesort(a,len);
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
