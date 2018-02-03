#include <iostream>

using namespace std;
int main(){
	string s;
	cin>>s;
	string res=""; int cnt=0; string tmp=",";
	while(s.length()%3!=0) s='0'+s;
	int i=0;
	while(i<s.length()) {
		res=res+tmp+s.substr(i,3); i+=3; 	
	}
	i=0;
	while(res[i]==',' || res[i]=='0') ++i;
	while(i<res.length()) {
		cout<<res[i]; ++i;	
	}
	return 0;
}
