#include <bits/stdc++.h>
using namespace std;
long long smax(long long a, long long b){
	return (a>b) ? a : b;
}
long long smin(long long a, long long b){
	return (a<b) ? a : b;
}
int main(){
	long long test, arr[4];
	cin>>test;
	while(test--){
		long long a, b, c;
		cin>>a>>b>>c;
		cout<<(long long) smax(a,smax(b,c))-smin(a,smin(b,c))<<'\n';
	}
	return 0;
}

