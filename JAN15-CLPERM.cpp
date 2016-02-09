//author farzirahu
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k,i,suml=0,j,num=0,sum=0;
		cin>>n>>k;
		int arr[k];
		for(i=0;i<k;i++)
		{
			cin>>arr[i];
			suml=suml+arr[i];
		}
		std::sort(arr, arr+k);
		/*for(i=0;i<k;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		*/
		for(j=0;j<k;j++)
		{
			if(arr[j]==1||arr[j]==2||arr[j]==4)
			{
				num=arr[j];
				break;
			}	
		}
		if(num!=0)
		{
			if(num%2==0)
			{
				cout<<"Mom"<<endl;
			}
			else
			{
				cout<<"Chef"<<endl;
			}
				
		}
		else
		{
			sum=((n*(n+1))/2)-suml;
			if((sum+1)%2==0)
			{
				cout<<"Mom"<<endl;
			}
			else
			{
				cout<<"Chef"<<endl;
			}
		}
		t--;
	}
	return 0;
}
