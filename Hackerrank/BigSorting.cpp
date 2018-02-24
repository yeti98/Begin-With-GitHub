#include <bits/stdc++.h>
using namespace std;
int cmp(string a, string b){
	if(a.length()==b.length()) return a<b;
	return a.length()<b.length();
}
int main(){
	int test; cin>>test;
	vector<string> v;
	while(test--){
		string s; cin>>s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto i:v) cout<<i<<'\n';
	return 0;
}
