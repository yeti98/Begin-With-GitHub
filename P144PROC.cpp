#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9+7;
long long power(long long n, long long k){
	if(k==0) return 1;
	if(k==1) return n;
	long long tmp=power(n, k/2);
	long long kq=tmp*tmp%MOD;
	if(k%2==1) return (n*kq)%MOD;
	return kq%MOD;
}
int main(){
	while(1){
		long long n, k;
		cin>>n>>k;
		if(n==0 && k==0) break;
		cout<<(long long) power(n,k)<<'\n';
	}
	return 0;
}
