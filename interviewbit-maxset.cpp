#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>A;
	for(int i=0;i<6;i++)
	{
		int inp;
		cin>>inp;
		A.push_back(inp);
	}
    
int i,sum=0,curr=0,idx;
    vector< vector<int> >vec;
    int k=0;
    for(i=0;i<A.size();i++)
    {
        curr=curr+A[i];
        if(A[i]<0)
        {
        curr=0;k++;
        }
        if(curr>=sum)
        {
            cout<<A[i]<<endl;
            //vec[k].push_back(A[i]);
            
            sum=curr;
           
        }
     
    }
    cout<<sum<<endl;
    //cout<<vec.size()<<endl;
    //sort(vec.rbegin(),vec.rend());
    /*for(int i=0;i<vec[0].size();i++)
	{
		cout<<vec[0][i]<<" ";
	}*/
    
    return 0;
    
}
