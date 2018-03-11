#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a, b, cnt=0;
	cin>>a;
	for(int i=2;i<=n;i++){
		cin>>b;
		if(a!=b) ++cnt;
		a=b;
	}
	cout<<cnt;
	return 0;
}
