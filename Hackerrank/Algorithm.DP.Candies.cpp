#include <bits/stdc++.h>
using namespace std;
int main(){	
	int n; cin>>n;
	int a[10005], c[10005];
	for(int i=1;i<=n;i++) cin>>a[i];
	long long candy=0;
	for(int i=1;i<=n;i++) cout<<c[i]<<" ";
	cout<<"\n";
	for(int i=1;i<=n;i++) candy+=c[i];
	cout<<candy;
	return 0;
}

