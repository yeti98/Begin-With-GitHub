#include <bits/stdc++.h>
using namespace std;
string solver(string s, int x){
	string a;
	for(int i=0;i<s.length();i++){
		if((i+x)%2) a+=s[i];
	}
	return a;
}
string ToString(long x){
	ostringstream ostt;
	ostt<<x;
	return ostt.str();
}
int main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s;
		int i=1;
		while(i<=n){
			s+=ToString(i);
			++i;
		}
		i=1;
		while(s.length()>1){
			s=solver(s,i);
			i=not(i);
		}
		cout<<s<<'\n';
	}
	return 0;
}
