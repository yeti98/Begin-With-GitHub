#include <bits/stdc++.h>
using namespace std;
int a[15], n, k, kq=0;
void Try(int s, int i, int k){
	if(i>n || k==0) return;
	if(k==1){
		if(s==a[n]-a[i-1]) ++kq;
		return;
	}
	for(int j=i; j<=n;j++){
		if(a[j]-a[i-1]==s){
			Try(s, j+1, k-1);
		}
	}
}
int main(){
	cin>>n>>k;
	a[0]=0; kq=0;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		a[i]+=a[i-1];
	}
//	for(int i=1;i<=n;i++) cout<<a[i]<<' ';
	if(k==1){
		cout<<1;
		return 0;
	}
	for(int i=1;i<=n;i++){
		Try(a[i], i+1, k-1);
	}
	cout<<kq;
	return 0;
}
