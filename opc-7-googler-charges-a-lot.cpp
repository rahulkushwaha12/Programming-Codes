#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
char * multiply(char a[],char b[]){
    static char mul[MAX];
    char c[MAX];
    char temp[MAX];
    int la,lb;
    int i,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;
    la=strlen(a)-1;
        lb=strlen(b)-1;
   
        for(i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }

    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }
   
    k=0;
    r=0;
    for(i=0;i<la+lb+2;i++){
         sum =0;
         y=0;
         for(j=1;j<=lb+1;j++){
             if(i <= la+j){
                 sum = sum + temp[y+i];
             }
             y += j + la + 1;
         }
         c[k++] = (sum+r) %10;
         r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul[j++]=c[i] + 48;
    }
    mul[j]='\0';
    return mul;
}
int main()
{
	char b1[MAX];
	long long n,q;
	scanf("%s",b1);
	scanf("%lld",&n);
	scanf("%lld",&q);
	
	vector<string>vec;
	for(int i=0;i<n;i++)
	{
		char inp[MAX];
		scanf("%s",inp);
		vec.push_back(inp);
	}
	
	for(int i=0;i<q;i++)
	{
		long long int sum=0;
		long long int l1,r1;
		scanf("%lld",&l1);
		scanf("%lld",&r1);
		
		for(int j=l1;j<=r1;j++)
		{
			sum+=(int)multiply(vec[j-1]*b1);
		}
		
		  
		printf("%lld\n",sum);
	}
	
	return 0;
}
