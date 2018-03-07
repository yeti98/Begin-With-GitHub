#include <bits/stdc++.h>
using namespace std;
int n; int a[1000005], cnt=0;
int solve(){
	int l=1, r=n;
	while(l<=r){
		if(a[l]<a[r]){
			++cnt;
			a[l+1]+=a[l];
			++l;
		}
		else if(a[l]>a[r]){
			++cnt;
			a[r-1]+=a[r];
			--r;
		}
		else {
			++l; --r;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	solve();
	cout<<cnt;
	return 0;
}
