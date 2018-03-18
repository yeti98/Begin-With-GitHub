#include <bits/stdc++.h>
using namespace std;
bool kt(string s){
	int sum=0;
	for(int i=0;i<s.length();i++) sum+=s[i]-'0';
	if(sum%9==0) return true;
	return false;
}
int main(){
	int test; cin>>test;
	while(test--){
		string s;
		cin>>s;
		int tmp=0;
		if(s=="0") {
			cout<<"YES\n";
			continue;
		}
		if(s.length()==1){
			cout<<"NO\n"; continue;
		}
		tmp+=(s[s.length()-2]-48)*10+s[s.length()-1]-48;
		if(tmp%4==0 && kt(s)){
			cout<<"YES\n";
		}else cout<<"NO\n";
	}
	return 0;
}

