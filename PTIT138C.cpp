#include <iostream>
using namespace std;
bool check(string s){
	int l=0, r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]) return false;
		++l, --r;
	}
	return true;
}
int main(){
	int test; cin>>test;
	string str="22233344455566677778889999";
	while(test--){
		string s; cin>>s;
		string number;
		for(int i=0;i<s.length();i++){
			if(s[i]<97) s[i]+=32;
			number+=str[s[i]-'a'];
		}
		if(check(number)) cout<<"YES"; else cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
