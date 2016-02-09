#include<bits/stdc++.h>
using namespace std;
int visited[10001];
vector<int>vec[10001];
int dfs(int i, int p)
{
	visited[i]=1;
	
		for(int j=0;j<vec[i].size(); j++)
		{
			
			if(!visited[vec[i][j]])
			{
				dfs(vec[i][j], i);
			}
			else {
				if(visited[vec[i][j]]!=p)
				{
					return 1;
					
					//cycle detected
				}
				
			}
			
		}
	
	
	return 0;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int i;
	int flag=0;
	
	for(i=0;i<m;i++)
	{
		int n1,n2;
		cin>>n1>>n2;
		vec[n1].push_back(n2);
		vec[n2].push_back(n1);
		
	}
	for(i=0;i<=n;i++)
	{
		visited[i]=0;
	}
	int b= dfs(1,-1);
	
	if(n==(m+1))
	{
	
	if(b==1)
	{
		cout<<"NO"<<endl;
	}
	else
	cout<<"YES"<<endl;
}
else{
	cout<<"NO"<<endl;
}
	return 0;
}
