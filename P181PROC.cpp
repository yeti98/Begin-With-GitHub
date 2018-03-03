#include <bits/stdc++.h>
#define MAX 1000000007
using namespace std;
long long n, k;
vector<long long> mod;
bool check(){
	if((k>=n)) return false;
	for(long long i=1;i<=k;i++){
		long long tmp=(n%i);
		for(long long j=0;j<mod.size();j++){
			if(mod[j]==tmp) return false;
		}
		mod.push_back(tmp);
	}
	return true;
}
int main(){
	cin>>n>>k;
	if((n==1 && k==1) || check() ) cout<<"Yes";
	else cout<<"No";
	return 0;
}
