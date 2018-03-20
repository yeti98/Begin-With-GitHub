#include <bits/stdc++.h>
using namespace std;
int n, s, a[205], l[40005]={0};
void solve(){
	int t;
	l[t]=0; l[0]=1;
	for(int i=1;i<=n;i++){
		for(int t=s;t>=a[i];t--){
			if(l[t]==1 || l[t-a[i]]==1) l[t]=1;
		}
	}
	l[t]=0;
}
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	solve();
	if(l[s]==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
