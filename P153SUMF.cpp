//#include <iostream>
//#include <algorithm>
//using namespace std;
//int freq[26]={0};
//bool check(){
//	for(int i=0; i<26;i++)
//		if(freq[i]!=1) return false;
//	return true;
//}
//int main(){
//	string s;
//	cin>>s;
//	for(int i=0;i<s.length();i++)	if(s[i]<=90)  s[i]+=32;
//	for(int i=0;i<s.length();i++) ++freq[s[i]-'a'];
//	if(check()) cout<<"YES"; else cout<<"NO";
//	return 0;
//}
#include <bits/stdc++.h>
using namespace std;
 
int main (){
	int n;
	cin>>n;
	string S;
	cin>>S;
	int dd[125];
	for (int i=0; i<=123; i++)	dd[i]=0;
	for (int i=0; i<n; i++){
		int so=S[i];
		if (so>=97 && so<=122) so-=32;
		dd[so]++;
	}
	int kt=1;
	for (int i=65; i<=90; i++){
		if (dd[i]==0){
			kt=0;
			break;
		}
	}
	if (kt==0) cout<<"NO";
	else cout<<"YES";
	return 0;
}
