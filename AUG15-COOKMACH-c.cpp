#include<iostream>
#include<cstdio>
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int check(long long int aa,long long int bb,long long int count)
{
	if(aa==bb)
	return count;
	else if(aa%2==0)//even
	{
		if(aa<bb&&(aa*2)<=bb)
		{
			aa=aa*2;
		}
		else
		{
			aa=aa/2;
		}
		count++;
		return check(aa,bb,count);
	}
	else//odd
	{
		if(aa<bb)
		{
			if(aa==1)
			{
				aa=aa*2;
			
			}
			
			else
			{
				aa=(aa-1)/2;
				
				
			}
		}
		else
		{
			aa=(aa-1)/2;
			
		}
		count++;
		return check(aa,bb,count);
	}
}
int main()
{
	long long int t;
	scanint(t);
	while(t--)
	{
		long long int a,b,c=0;
		scanint(a);
		scanint(b);
		
		printf("%d\n",check(a,b,c));
	}
	return 0;
}
