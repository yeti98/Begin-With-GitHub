#include <iostream>
using namespace std;
int main(){
	long long test, x=0;
	cin>>test;
	while(test--){
		string s; cin>>s;
		if(s=="++X" || s=="X++") ++x;
		else --x;
	}
	cout<<x;
	return 0;
}
