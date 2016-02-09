#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int>&i, const pair<int,int>&j)
{
    return i.second < j.second;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,i,a,b,count=0;
		cin>>n;
		std::vector < std::pair<int, int> > my_vector;
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
            
    		my_vector.push_back(std::make_pair(a,b));
			
		}
		sort(my_vector.begin(), my_vector.end(),compare); 
          
		for(int i = 0; i < my_vector.size()-1; i++)
			{
				if(my_vector[i+1].first>my_vector[i].second)
				{
					count++;
				}
			    /* cout << output[i].first << ", " << output[i].second << endl;*/
			}
			cout<<count<<endl;
			t--;
			
	}
	return 0;
}
