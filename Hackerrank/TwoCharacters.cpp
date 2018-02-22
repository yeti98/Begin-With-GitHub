#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
	return a>b ? a : b;
}
bool valid(string s){
	for(int i=1;i<s.length();i++)
		if(s[i]==s[i-1]) return false;
	return true;
}
int main(){
	int strlen, ans=0;
	string str;
	cin>>strlen>>str;
	for(char ch1='a'; ch1<'z'; ++ch1){
		for(char ch2='a'; ch2<'z'; ++ch2){
			if(ch1!=ch2){
				if(str.find(ch1)==-1 || str.find(ch2)==-1) continue;
				string s;
				for(char c : str) if(c==ch1 || c==ch2) s+=c;
				if(valid(s)) ans=max(ans, s.length());
			}
		}
	}
	cout<<ans;
	return 0;
}
