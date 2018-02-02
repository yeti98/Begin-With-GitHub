#include <iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		string s; cin>>s;
		if(s[s.length()-2]=='8' && s[s.length()-1]=='6') cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}
