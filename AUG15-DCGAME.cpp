#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int n,m,inp,i,j,count=0;
	cin>>n>>m;
	vector<long long int> vec;
	for(i=0;i<n;i++)
	{
		cin>>inp;
		vec.push_back(inp);
	}
	vector<vector<char> > game;
	char inp1;
	for (i = 0; i < m; i++) {
	    vector<char> row; 
	    for (j = 0; j < 3; j++) {
	    	cin>>inp1;
	        row.push_back(inp1); // Add an element (column) to the row
	    }
	    game.push_back(row); // Add the row to the main vector
}
	
	sort(vec.begin(),vec.end());
	
	map<long long int,long long int> hash;
	
		;
	for(i=0;i<n;i++)
	{
		hash.insert(pair<long long int,long long int>(vec[i],i+1));
		
	}
	
	for(i=0;i<m;i++)
	{
		
		if(game[i][0]=='>')
		{
			if(game[i][2]=='D')
			{
				
				for(j=0;j<n;j++)
				{
					if(vec[j]>(int)(game[i][1]-'0'))
					count=count+hash[vec[j]];
				}
				
				if(count==0)
				cout<<'C';
				else if(count%2==0)
				cout<<'C';
				else
				cout<<'D';
				count=0;
				
			}
			else
			{
				
				for(j=0;j<n;j++)
				{
					if(vec[j]>(int)(game[i][1]-'0'))
					count=count+hash[vec[j]];
				}
				if(count==0)
				cout<<'D';
				else if(count%2==0)
				cout<<'D';
				else
				cout<<'C';
				count=0;
			}
		}
		else if(game[i][0]=='<')
		{
			if(game[i][2]=='D')
			{
				
				for(j=0;j<n;j++)
				{
					if(vec[j]<(int)(game[i][1]-'0'))
					count=count+hash[vec[j]];
				}
				if(count==0)
				cout<<'C';
				else if(count%2==0)
				cout<<'C';
				else
				cout<<'D';
				count=0;
				
			}
			else
			{
				
				for(j=0;j<n;j++)
				{
					if(vec[j]<(int)(game[i][1]-'0'))
					count=count+hash[vec[j]];
				}
				if(count==0)
				cout<<'D';
				else if(count%2==0)
				cout<<'D';
				else
				cout<<'C';
				count=0;
			}
		}
		else
		{
			if(game[i][2]=='D')
			{
				
				count=hash[(int)(game[i][1]-'0')];
				if(count==0)
				cout<<'C';
				else if(count%2==0)
				cout<<'C';
				else
				cout<<'D';
				count=0;
			}
			else
			{
				
				count=hash[(int)(game[i][1]-'0')];
				if(count==0)
				cout<<'D';
				else if(count%2==0)
				cout<<'D';
				else
				cout<<'C';
				count=0;
			}
		}
	}
	
	
	return 0;
}
