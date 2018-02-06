#include <iostream>
using namespace std;
string s;
bool check(){
	for(int i=0;i<s.length();i++){
		int tmp=s[i]-'0';
		if(i%2==0){
			if(tmp%2==0) return false;
		}
		else {
			if(tmp%2==1) return false;
		}
	}
	return true;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>s;
		if(check()) cout<<"YES\n"; else cout<<"NO\n";
	}
	return 0;
}
