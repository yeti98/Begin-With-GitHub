#include <iostream>
#include <cmath>
using namespace std;
bool prime(long long x){
	if(x<2) return false;
	for(long long i=2;i<=sqrt(x);i++)
		if(x%i==0) return false;
	return true;
}
bool near_prime(long long x){
	long long j=sqrt(x);
	if((j*j!=x) || !prime(j) || x<4) return false;
	return true;
}
int main(){
	long long n, x;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>x;
		if(near_prime(x)) cout<<"YES\n"; else cout<<"NO\n";
	}
	return 0;
}
