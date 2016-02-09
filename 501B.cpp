//author farzirahu
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	map < string, string> bb;
	string a,b;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		bb.insert(make_pair(a,b));
	}
	/*for(map<string,string>::iterator ii=bb.begin(); ii!=bb.end(); ++ii)
	{
		cout<< (*ii).first<<" "<< (*ii).second<<endl;
	}*/
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

map<string, string> mp;

int main() {
	int q; cin >> q;
	for(int i = 0; i < q; i++) {
		string a, b; cin >> a >> b;
		if(!mp.count(a)) {
			mp[a] = a;
		}
		mp[b] = mp[a];
		mp.erase(a);
	}
	cout << mp.size() << '\n';
	for(auto it : mp) {
		cout << it.second << ' ' << it.first << '\n';
	}
	return 0;
}
