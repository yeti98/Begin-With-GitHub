#include <iostream>
using namespace std;
string str="AOYEUIaoyei";
bool check(char s){
	for(int i=0;i<str.length();i++)
		if(s==str[i]) return false;
	return true;
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(check(s[i])){
			if(s[i]<97) s[i]+=32;
			cout<<"."<<s[i];
		}
	return 0;
}
