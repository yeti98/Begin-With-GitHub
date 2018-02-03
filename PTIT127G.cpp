#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cmp(string a, string b){
	while(a.length()<b.length()) a='0'+a;
	while(b.length()<a.length()) b='0'+b;
	for(int i=0;i<a.length();i++){
		if(a[i]>b[i]) return 0;
		if(a[i]<b[i]) return 1;	
	}
	return 1;
}
string getlength(string s){
	int i=0;
	while(s[i]=='0') ++i;
	if(i>=s.length()) return "0";
	string res;
	for(int j=i;j<s.length();j++) res+=s[j];
	return res;
}
int main(){
	vector<string> vtr;
	int test; cin>>test;
	while(test--){
		string s;
		cin>>s;
		s+='a';
		for(int i=0;i<s.length();){
			if(s[i]>='0' && s[i]<='9'){
				string sum="";
				while(s[i]>='0' && s[i]<='9') {
					sum+=s[i]; ++i;
				}
				vtr.push_back(sum);
			}
			else ++i;
		}
	}
	sort(vtr.begin(), vtr.end(), cmp);
	for(int i=0;i<vtr.size();i++){
		cout<<getlength(vtr[i])<<"\n";
	}
	return 0;
}
//M?i dòng t?i da 100 kí t?.
