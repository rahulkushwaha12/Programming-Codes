#include<bits/stdc++.h>
using namespace std;
void merge(long long int *,long long int, long long int , long long int );
void mergesort(long long int *a, long long int low, long long int high)
{
    long long int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(long long int *a, long long int low, long long int high, long long int mid)
{
    long long int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,templ,tempf,p;
		scanf("%lld",&n);
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			
			
		}
		//sort(arr,arr+n);
		mergesort(arr,0,n-1);
	//	std::sort(arr, arr+pp, std::greater<int>());
		
		templ=arr[n-1]*arr[n-2];
		//cout<<templ<<endl;
		//suml=arr[n-1]+arr[n-2];
		
		
		tempf=arr[0]*arr[1];
		//cout<<tempf<<endl;
		//sumf=arr[0]+arr[1];
		//cout<<' '<<sum<<endl;
		p=n-1;
		i=n-2;
		
			if(templ>tempf)
			{
				
				
			p=n-1;
		}
			else
			{
				p=1;
				
			}
			
		printf("%lld %lld\n",arr[p-1],arr[p]);
		
	}
	return 0;
}
