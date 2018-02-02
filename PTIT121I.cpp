#include <iostream>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		int stt, loop;
		string s;
		cin>>stt>>loop>>s;
		cout<<stt<<" ";
		for(int i=0;i<s.length();i++){
			for(int j=0;j<loop;j++) cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
}
