#include <bits/stdc++.h>
using namespace std;
string s;
int freq[26]={0};
string solver(){
	int i=0;
	while(s[i]) ++freq[s[i]-'a'], ++i;
	int res=0;
	for(int i=0;i<26;i++) if(freq[i]%2) ++res;
	if(res>1) return "NO";
	return "YES";
}
int main(){
	cin>>s;
	cout<<solver();
	return 0;
}
