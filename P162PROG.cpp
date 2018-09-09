#include <bits/stdc++.h>
using namespace std;
long long n, res=0;
long long sl(long long n){
	if(n<=0) return 0;
	res++;
	long long tmp=1;
	while(tmp*2<=n){
		tmp*=2;
	}
	return sl(n-tmp);
}
int main(){	
	cin>>n;
	sl(n);
	cout<<res;
	return 0;
}

