#include <iostream>
using namespace std;
bool isLuckyNumber(string s){
	if(s.length()==1){
		if(s=="9") return true;
		return false;
	}
	long sum=0;
	for(long i=0;i<s.length();i++)
			sum+=s[i]-'0';
	string res;
	while(sum){
		res+=(sum%10)+'0';
		sum/=10; 
	}
	s=res;
	return isLuckyNumber(s);
}
int main(){
	int test; cin>>test;
	while(test--){
		string s; cin>>s;
		if(isLuckyNumber(s)) cout<<"1\n"; else cout<<"0\n";
	}
	return 0;
}
