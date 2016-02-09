//author farzirahu
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//using namespace std;
int main()
{
	int n,q,i,j,l1=0,l2=0,sum=0,l=0,s=0,n1=0,n2=0;
	//cin>>n>>q;
	scanf("%d%d",&n,&q);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		//cin>>arr[i];
		scanf("%d",&arr[i]);
	}
	for(i=0;i<q;i++)
	{
		char str[100];
		//gets(str);
		fgets (str, 100, stdin);
		//scanf ("%[^\n]%*c", str);
		l=strlen(str);
		printf("%d\n",l);
		for(j=4;j<l;j++)
		{
			if((int)str[j]==32)
			{
				s=j;
				break;
			}
			
		}
		
		l1=s-4;
		l2=l-s;
		if(l1==1)
		{
			n1=(int)str[4];
		}
		if(l1==2)
		{
			n1=(10*(int)str[4])+(int)str[5];
		}
		if(l1==3)
		{
			n1=100;
		}
		if(l2==1)
		{
			n2=(int)str[s+1];
		}
		if(l2==2)
		{
			n2=(10*(int)str[s+1])+(int)str[s+2];
		}
		if(l2==3)
		{
			n2=100;
		}
		
		for(j=n1-1;j<n2;j++)
		{
			sum=sum+arr[j];
		}
		printf("%d\n",sum);
	}
	return 0;
}
