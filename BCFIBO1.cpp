#include <bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
long long sqr(long long x){
	return x*x;
}
long long fib(int n) {
	if (n <= 2) {
		return (n ? 1 : 0);
	}
	if (n & 1) {
		return (sqr(fib(n >> 1)) + sqr(fib((n >> 1) + 1)))%MOD;
	}
	long long x = fib(n >> 1);
	return ((2 * fib((n >> 1) - 1) + x) * x)%MOD;
}
int main(){
	int n; cin>>n;
	cout<<fib(n);
	return 0;
}

