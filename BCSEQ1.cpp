#include <bits/stdc++.h>
using namespace std;
int a[10005], tt, n;
int Solver(){
	for(int i=1;i<n;i++){
		if(a[n]%a[i]==0){
			int k=2;
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]*k) break;
				else if(a[j]==a[i]*k) k++;
			}
			if(a[i]*k==a[n]) return a[i];
		}		
	}
	return a[n];
}
int main(){
	int test; cin>>test;
	while(test--){
		a[0]=0;
		cin>>tt>>n;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			a[i]+=a[i-1];
		}
//		for(int i=1;i<=n;i++) cout<<a[i]<<' ';
//		cout<<'\n';
		cout<<tt<<" ";
		cout<<Solver()<<'\n';
	}
	return 0;
}
