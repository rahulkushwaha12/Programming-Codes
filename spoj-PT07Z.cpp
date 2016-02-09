#include<bits/stdc++.h>
using namespace std;
#define MAX 10001
int visited[MAX]={0};
vector< int > vec[MAX];
int dist=0;
int farthest=1;
pair <int , int> dfs(int i,int d)
{
	
	cout<<i<<endl;
	visited[i]=1;
	
	
	for(int j=0;j<vec[i].size();j++)
	{
		if(!visited[vec[i][j]])
		{
			
				dfs(vec[i][j],d+1);
			
		
			
		}
		
	}
	cout<<"d="<<d<<endl;
	if(d>=dist)
	{
		dist=d;
		farthest=i;
	}
	

	return make_pair(farthest,dist);
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	pair < int ,int > B,C;
	
    B = dfs(1,0);
    cout<<B.first<<" "<<B.second<<endl;
    for(int i=0;i<MAX;i++)
    {
    	visited[i]=0;
    }
    dist=0; 
    farthest=B.first;
    
	C=dfs(B.first,0);
	//cout<<C.first<<" "<<C.second<<endl;
	cout<<C.second<<endl;
	return 0;
}
