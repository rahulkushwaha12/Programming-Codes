//author farzirahu
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0){
		long long int n,k,max=0,pmulti,total_profit=0,i;
		cin>>n>>k;
		long long int time[n],profit[n];
		for(i=0;i<n;i++){
			cin>>time[i];
		}
		for(i=0; i<n; i++){
			cin>>profit[i];
			pmulti = k/time[i];
			total_profit = pmulti*profit[i];
			if(max<=total_profit)
			{
				max=total_profit;
			}
		}
		cout<<max<<endl;
		
		t--;
	}
	return 0;
	
}
