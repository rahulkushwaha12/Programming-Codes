#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,inp,j,c=0;
	cin>>n;
	vector<int> vec;
	
	for(i=0;i<n;i++)
	{
		
		cin>>inp;
		vec.push_back(inp);
	}
	i=1;
	while(i<n)
	{
	
		if(vec[i]>vec[i-1]&&vec[i]>vec[i+1])
		{
			vec.erase(vec.begin() + i);
			i++;
		}
		else if(vec[i]>vec[i-1]&&vec[i]<vec[i+1])
		{
			c=i;
			cout<<c<<endl;
			for(j=i;j<n-1;j++)
			{
				if(vec[j]<vec[j+1])
				{
					c++;
				}
				else
				{
					break;
				}
			}
			cout<<c<<endl;
			
			vec.erase(vec.begin() + i,vec.begin() + c);
			i++;
		}
		else
		i++; 
	
	}
for (std::vector<int>::iterator it = vec.begin() ; it != vec.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
	
	cout<<endl;
	return 0;
}
