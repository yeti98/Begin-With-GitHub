#include <iostream>
using namespace std;
bool check(string s){
	int l=0, r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		l++, r--;
	}
	return true;
}
int main(){
	int test; cin>>test;
	while(test--){
		string s;
		cin>>s;
		if(check(s)) cout<<"YES"; else cout<<"NO";
		cout<<"\n";
	}
}
