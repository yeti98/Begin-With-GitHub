#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	if(s[s.length()-2]=='A'){
		string gio=s.substr(0,2);
		istringstream itt(gio);
		int x; itt>>x;
		if(x==12){
			cout<<"00"<<s.substr(2,s.length()-4);		
		}else{
			cout<<s.substr(0, s.length()-2);
		}
	}
	else{
		string gio=s.substr(0,2);
		istringstream itt(gio);
		int x; itt>>x;
		if(x!=12)	x+=12;
		cout<<x<<s.substr(2,s.length()-4);
	}
	return 0;
}
