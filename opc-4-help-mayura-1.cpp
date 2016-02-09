#include<bits/stdc++.h>
#define ll long long 
using namespace std;
string tostring(long long int Number)
{
	
	string Result;
	
	stringstream convert; 
	
	convert << Number;
	
	Result = convert.str();
	return Result;
}
long long int tointeger(string str)
{
	    unsigned ll int Result;
		stringstream convert(str);
		convert >> Result;
		return Result;
}
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
	   string Text, tmpstr;
        //cout<<"str1 "<<Text<<endl;
        //cout<<"str2 "<<tmpstr<<endl;
		//Text.clear();
		//tmpstr.clear();
		//cin>>Text;
		cin.ignore(); 
		cin>>Text;
	//	cout<<Text<<endl;
		unsigned ll int tmpnum,flag=0;
		//cout<<"intform "<<tointeger(Text)<<endl;
		
		while(tointeger(Text)>=495)
		{
            flag=1;
			tmpstr=Text.substr(0,12);
			Text.erase(0,12);
			tmpnum=tointeger(tmpstr);
			tmpnum=tmpnum%495;
			tmpstr=tostring(tmpnum);
			Text=tmpstr + Text;
		}
	//cout<<"num"<<tmpnum<<endl;
		if(tmpnum==0&&flag==1)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	return 0;
	
}
