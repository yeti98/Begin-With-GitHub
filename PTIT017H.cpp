#include <bits/stdc++.h>
using namespace std;
long long tinhd(long long n){
	long long sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if(i!=n/i) sum+=n/i;
		}
	}
	return sum;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long x; cin>>x;
		if(tinhd(tinhd(x))==2*x){
			cout<<"YES\n";
		}else cout<<"NO\n";
	}
	return 0;
}

