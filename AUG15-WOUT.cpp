#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int n,h,min,max,i,j;
		cin>>n>>h;
		ll int m1=0,m2=0,M1=0,M2=0,htemp,hleft,mintemp,maxtemp,count=0,countup=0,countdown=0,countud=0,path;
		vector<int> vec1;
		vector<int> vec2;
		for(i=0;i<n;i++)
		{
			cin>>min>>max;
			vec1.push_back(min);
			vec2.push_back(max);
			
		}
		vector<int> vec11=vec1;
		vector<int> vec22=vec2;
		vector<int> countu;
		vector<int> countd;
		vector<int>::iterator it;
		sort(vec11.begin(),vec11.end());
		sort(vec22.begin(),vec22.end());
	/*	for(i=0;i<n;i++)
		{
			cout<<vec1[i]<<' '<<vec2[i]<<endl;
		
			
		}
		for(i=0;i<n;i++)
		{
			cout<<vec11[i]<<' '<<vec22[i]<<endl;
		
			
		}*/
		m1=vec11[0];
		M1=vec11[n-1];
		m2=vec22[0];
		M2=vec22[n-1];
		if((m2-M1)>=0)
		path=(m2-M1)+1;
		else
		path=0;
		if(path>=h)
		{
			cout<<0<<endl;
			
		}
		else
		{
			hleft=h-path;
			htemp=hleft;
			min=M1-path;
			max=m2+path;
			mintemp=min;
			maxtemp=max;
			cout<<htemp<<' '<<mintemp<<' '<<maxtemp<<endl; 
			while(htemp--&&((M2-maxtemp)+1)!=0)
			{
				for(i=0;i<n;i++)
				{
					if(vec2[i]<max)
					count++;
				}
				countu.push_back(count);
				count=0;
				maxtemp++;
			}
			countu.push_back(n);
			for(it=countu.begin();it!=countu.end();++it)
			{
				cout<<*it<<' ';
			}
			cout<<endl;
			/*countup=countup+((htemp+1)*n);*/
			//cout<<"countup "<<countup<<endl;
			mintemp=min;
			maxtemp=max;
			count=0;
			htemp=hleft;
				while(htemp--&&((mintemp-m1)+1)!=0)
			{
				for(i=0;i<n;i++)
				{
					if(vec1[i]>min)
					count++;
				}
				countd.push_back(count);
				count=0;
				mintemp--;
			}
			countd.push_back(n);
			for(it=countd.begin();it!=countd.end();++it)
			{
				cout<<*it<<' ';
			}
			cout<<endl;
			/*countdown=countdown+((htemp+1)*n);*/
			//cout<<"countdown "<<countdown<<endl;
			
			mintemp=min;
			maxtemp=max;
			count=0;
			htemp=hleft;
			
			i=j=0;
			while(htemp--)
			{
				if(i>=countu.size()&&j>=countd.size())
				break;
				if(countu[i]>=countd[j])
				{
					countud=countud+countd[j];
					j++;
				}
				else
				{
					countud=countud+countu[i];
					i++;
				}
				
			}
			/*if(countup>=countdown)
			cout<<countdown<<endl;
			else
			cout<<countup<<endl;*/
			//cout<<"htemp"<<htemp<<endl;
			countdown=countdown+((htemp+1)*n);
			cout<<countud<<endl;
		}
		
		
		
		
	}
	return 0;
}
