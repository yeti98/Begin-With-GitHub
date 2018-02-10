#include <iostream>
using namespace std;
int main(){
	string s; getline(cin, s);
	int test=s[0]-'0';
	while(test--){
		getline(cin,s);
		if(s=="dung") cout<<"2\n";
		else if(s=="lon hon") cout<<"1\n";
		else cout<<"3\n";
	}
	return 0;
}
