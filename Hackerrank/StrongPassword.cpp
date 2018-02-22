#include <bits/stdc++.h>
using namespace std;
string numbers = "0123456789";
string lower_case = "abcdefghijklmnopqrstuvwxyz";
string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string special_characters = "!@#$%^&*()-+";
bool check(const string pwd, const string pattern){
	for(int j=0;j<pattern.length();j++){
		for(int i=0;i<pwd.length();i++)
			if(pwd[i]==pattern[j]) return true;
	}
	return false;
}
int minimumNumber(int n, string pwd){
	int count=0;
	if(!check(pwd,numbers)) ++count;
	if(!check(pwd,lower_case)) ++count;
	if(!check(pwd,upper_case)) ++count;
	if(!check(pwd,special_characters)) ++count;
	while(pwd.length()+count<6) ++count;
	return count;
}
int main(){
	int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}
