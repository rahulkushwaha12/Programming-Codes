#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long int t;
	
	cin>>t;
	while(t>0)
	{
		
	  long long int i;
	  vector<string> vec;
	  	for(i=0;i<6;i++)
		{
			string str;
			cin>>str;
			vec.push_back(str);
			
		}
		int check=0;
		/*for(int i=0;i<6;i++)
		{
			cout<<vec[i]<<endl;
		}	*/
			if (vec[4]==vec[1])
		{
			
			if (vec[1]==vec[2])
			{
				check = 1;
			}
			if(vec[1]==vec[3])
			{
				check=1;
			}
			
		}
		if (vec[4]==vec[0])
		{
			
			if (vec[0]==vec[2])
			{
				check=1;
			}
			if(vec[0]==vec[3])
			{
				check=1;
			}
			
		}
		if (vec[5]==vec[1])
		{
			
			if (vec[1]==vec[2])
			{
				check=1;
			}
			if(vec[1]==vec[3])
			{
				check=1;
			}
			
		}
		if (vec[5]==vec[0])
		{
			
			if (vec[0]==vec[2])
			{
				check=1;
			}
			if(vec[0]==vec[3])
			{
				check=1;
			}
			
		}
		if(check==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
		t--;
	}
	return 0;
}
