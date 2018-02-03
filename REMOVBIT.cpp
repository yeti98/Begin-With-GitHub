#include <iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0;
	while(i<s.length() && s[i]!='0') ++i;
	if(i>=s.length()){
		for(int j=1;j<s.length();j++) cout<<s[j];
	}
	else{
		for(int j=0; j<s.length();j++)
			if(j!=i) cout<<s[j];
	}
	return 0;
}
