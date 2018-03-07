#include <bits/stdc++.h>
using namespace std;
long long powerSum(long X, long N, int i){
	long tmp=pow(i,N);
	if(tmp>X) return 0;
	if(tmp==X) return 1;
	return powerSum(X,N,i+1) + powerSum(X-tmp, N, i+1);
}
int main(){
	long x, n;
	cin>>x>>n;
	cout<<powerSum(x,n,1);
	return 0;
}
//https://www.hackerrank.com/challenges/the-power-sum/forum
