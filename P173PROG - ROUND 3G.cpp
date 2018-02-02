#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	long test;
	cin>>test;
	while(test--){
	 	string s;
  		cin>>s;
  		string temp=s;
  		sort(temp.begin(), temp.end());
 		next_permutation(s.begin(), s.end());
 		(temp!=s)? cout<<s: cout<<"BIGGEST";
 		cout<<'\n';
	}
	return 0;
}
