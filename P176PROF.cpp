#include <bits/stdc++.h>
using namespace std;
int main(){
	long test; cin>>test;
	while(test--){
		string s; cin>>s;
		long long zmax=0, h=0, type=0, i=0;
		while(i<s.length()){
			if(s[i]=='_' || s[i]==')') {
				++i;
			}
			else{
				if(s[i]=='('){
					++i;
					while(1){
						long dem=0;
						while(s[i]!='_' && s[i]!=')' && s[i]!='(' && i<s.length()) ++i, ++dem;
						if(dem>0) ++h;
						if(s[i]==')') break;
						else ++i;
					}
				}
				else{
					long dem=0;
					while(s[i]!='_' && s[i]!=')' && s[i]!='(' && i<s.length()) ++i,++dem;
					if(dem>zmax) zmax=dem;
				}
			}
		}
		cout<<zmax<<" "<<h<<'\n';
	}
	return 0;
}
