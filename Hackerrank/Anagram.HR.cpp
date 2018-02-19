#include <bits/stdc++.h>
using namespace std;
int anagram(string s){
	if(s.length()%2!=0) return -1;
	int freqs1[26]={0}, freqs2[26]={0};
	int i=0;
	while(i<s.length()/2) ++freqs1[s[i]-'a'],++i;
	i=s.length()/2;
	while(s[i]) ++freqs2[s[i]-'a'],++i;
	int res=0;
	i=0;
	while(i<26) res+=abs(freqs1[i]-freqs2[i]), ++i;
	return res/2;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s; cin>>s;
		int i=0;
		int res=anagram(s);
		cout<<res<<'\n';
	}
	return 0;
}
