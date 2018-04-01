#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a,b,dem=0;
	cin>>n>>a>>b;
	for(int i=0;i<=b;i++){
		if(n-i-1>=a) dem++;
		else break;
	}
	cout<<dem;
}
