#include <iostream>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		string s;
		cin>>s;
		int cnt=1;
		int i=0;
		while(i<s.length()){
			while(s[i]==s[i+1]) {
				++cnt; ++i;	
			}
			cout<<cnt<<s[i];
			cnt=1;
			++i;
		}
		cout<<'\n';
	}
	return 0;
}
