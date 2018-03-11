#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, cnt=0; cin>>n;
	for(int i=1;i<=n;i++){
		int p, q;
		cin>>p>>q;
		if(p+2<=q) ++cnt;
	}
	cout<<cnt;
	return 0;
}
