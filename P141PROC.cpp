#include<bits/stdc++.h>
using namespace std;
main(){
	int n, X=0;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="X++" || s=="++X") X+=1;
		else X-=1;
	}	
	cout<<X;
}
