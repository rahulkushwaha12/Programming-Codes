//author farzirahu

#include<bits/stdc++.h>

using namespace std;

//fast i/o

inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}

inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;

    while (c < 33)
        c = getchar_unlocked();

    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }

    str[i] = '\0';
}


int main(){
	int t;
	fastRead_int(t);
	while(t>0)
	{
		int i,j,n,q,l,r,res=0;
		
		fastRead_int(n);
		fastRead_int(q);
		//scanf("%lld%lld",&n,&q);
		int arr[n];
		for(i=0;i<n;i++){
			//scanint(arr[i]);
			fastRead_int(arr[i]);
			//scanf("%lld",&arr[i]);
		}
		for(i=0;i<q;i++){
			fastRead_int(l);
			fastRead_int(r);
			//scanf("%lld%lld",&l,&r);
			if(l==1){
				res=arr[r];
				for(j=r+1; j<n;j++){
				
			res = __gcd(res, arr[j]);
	}
			}
		else if(r==n){
				res=arr[0];
				for(j=1; j<l-1;j++){
				
			res = __gcd(res, arr[j]);
			}
		}
			else{
				res=arr[0];
			
			
	
		for(j=1; j<=l-2;j++){
				
			res = __gcd(res, arr[j]);
	}
		for(j=r; j<n;j++){
				
			res = __gcd(res, arr[j]);
	}
}
		//cout<<res<<endl;
		printf("%d\n",res);
		}
		t--;
	}
	return 0;
} 
