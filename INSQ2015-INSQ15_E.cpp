#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	vector<pair<ll int, int> > vec;
	int i,n,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int s,m;
		ll int res=0;
		cin>>s>>m;
		/*	 while(m != 0)             
	   {
	      if (m&01)                
	        {
	          res=res+s;    
	        }
	      s<<=1;                  
	                               
	      m>>=1;                   
	   }
	   
   */
   res=(long long int) m*s;
		vec.push_back(make_pair(res,n-i));
	}
	//vector<ll int> vecc=vec;
	sort(vec.begin(),vec.end());
	
	cin>>q;
	while(q--)
	{
	    int k;
		cin>>k;
		cout<<vec[k-1].second<<endl;
		
	}
	return 0;
}
