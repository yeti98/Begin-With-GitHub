// error with compiler g++ 4.3.2?
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main(){
	string s; getline(cin, s);
	int test=atoi(s.c_str());
	while(test--){
		getline(cin, s);
		vector<int> freq(26, 0);
		vector<bool> check(26, false); 
		for(int i=0;i<s.length();i++){
			if(s[i]<97) s[i]+=32;
			if(s[i]!=' ') ++freq[s[i]-'a'];			
		}
		long value=0;
		for(int i=0;i<freq.size();i++)
			if(freq[i]>1) value+=freq[i];
		cout<<value<<" ";
		for(int i=0;i<s.length();i++){
			if(s[i]!=64){
				int vt=s[i]-'a';
				if(freq[vt]>0 && check[vt]==false){
					cout<<s[i]; check[vt]=true;
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
