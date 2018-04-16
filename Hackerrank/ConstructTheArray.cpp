#include <bits/stdc++.h>
using namespace std;
//https://www.hackerrank.com/challenges/construct-the-array/editorial
long long INF=1000000007;
int mod(long long x){
	while(x<0) x+=INF;
	return x%INF;
}
int Epower(int n, int k){
	if(k==0) return 1;
	if(k==1) return n;
	int tmp=Epower(n, k/2);
	int kq=mod(tmp*1ll*tmp); //tmp*tmp*1ll != tmp*tmp*1ll
	if(k&1) return mod(kq*1ll*n);
	return kq;
}
int solve(int n, int k, int x){
	int dp[n+5];
	memset(dp, 0, sizeof(dp));
	dp[0]=1;
	for(int i=2;i<=n;i++)	
		dp[i]=mod(mod(dp[i-2]*1LL*(k-1))+mod(dp[i-1]*1LL*(k-2)));
	if(x==1)	return dp[n-1];
	return mod(dp[n]*1ll*Epower(k-1, INF-2));
}
int main(){
	int n, k, x;
	cin>>n>>k>>x;
	cout<<solve(n, k, x);
	return 0;
}

