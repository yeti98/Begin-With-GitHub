#include <bits/stdc++.h>
using namespace std;
int main(){
	int A[1005];
	A[0]=0;
	A[1]=1;
	for(int i=2;i<=1000;i++){
		if(i%2) A[i]=A[i-1];
		else A[i]=A[i-1]+A[i/2];
	}
	int test; cin>>test;
	for(int t=1;t<=test;t++){
		int n;
		cin>>n;
		cout<<t<<" "<<A[n]<<'\n';
	}
	return 0;
}

