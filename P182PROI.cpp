#include <bits/stdc++.h>
using namespace std;
long long n, b1, b;
void cntbit(){
	while(n>0){
		if(n%2) ++b1;
		++b;
		n/=2;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	if(n==0 || n==1) cout<<1;
	else{
		cntbit();
		cout<<(long long) pow(2,b-b1);
	}
	return 0;
}
