#include <bits/stdc++.h>
using namespace std;
string minstr(string a, string b){
	if(a.length()>b.length()) return b;
	if(b.length()>a.length()) return a;
	return (a>b)? b : a;
}
int main(){
	int n; cin>>n;
	string ans="999999999999999999999999999999999999999999999999999999999999999999999999";
	while(n--){
		string id, hero, result;
		cin>>id>>hero>>result;
		if(hero=="AM" && result=="W")	ans=minstr(ans, id);
	}
	cout<<ans;
	return 0;
}
