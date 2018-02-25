#include <bits/stdc++.h>
using namespace std;
int main(){
	long n; cin>>n;
	string s; cin>>s;
	long i=0, seat=1;
	while(i<s.length()){
		if(s[i]=='S') ++i;
		else i+=2;
		++seat;
	}
	if(seat>n) cout<<n; else cout<<seat;
	return 0;
}
