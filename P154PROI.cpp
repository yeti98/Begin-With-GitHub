#include <bits/stdc++.h>
using namespace std;
bool isValid(string s){
	long l=0, h=s.length()-1;
	while(l<=h){
		if(abs(s[l]-s[l+1])!=abs(s[h]-s[h-1])) return false;
		++l; --h;
	}
	return true;
}
int main(){
	int test; cin>>test;
	while(test--){
		string s;
		cin>>s;
		if(isValid(s)) cout<<"YES\n"; else cout<<"NO\n";
	}
}
