#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long low=0, up=0;
	for(auto i: s)
		(i<=90)? ++up : ++low;
	if(up>low){
		for(auto i : s)
			cout<< ((i>90) ? char(i-32)  : i);
	}
	else{
		for(auto i : s)
			cout<< ((i<=90) ? char(i+32)  : i);
	}
	return 0;
}
