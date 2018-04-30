#include <bits/stdc++.h>
using namespace std;
//https://www.hackerrank.com/challenges/unbounded-knapsack/problem
int main(){
	int test; cin>>test;
	while(test--){	
		int n, s; cin>>n>>s;
		int a[2005], f[2005]={0};
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		f[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=a[i];j<=s;j++){
				f[j]=f[j]+f[j-a[i]];
			}
		}
		int i=s;
		while(f[i]==0 && i>=0) --i;
		cout<<i<<"\n";
	}
	return 0;
}

