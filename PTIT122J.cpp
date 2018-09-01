#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t; cin>>t;
	while(t--){
		string s; cin>>s;
		long long a=0, b=0;
		int i=0;
		while(s[i]!='/') a=a*10+s[i]-'0', i++;
		i++;
		while(s[i]) b=b*10+s[i]-'0',i++;
		while(a!=b){
			if(a<b){
				cout<<"L";
				long long tmp=a; a=b-a; b=tmp;
			}else{
				cout<<"R";
				long long tmp=b; b=a-b; a=tmp;
			}
		}
		cout<<"\n";	
	}
	return 0;
}

