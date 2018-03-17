#include <bits/stdc++.h>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		int n, tmp, max, vt;
		int cnt[1005]={0};
		cin>>n;
		for(int i=1;i<=n;i++) {
			cin>>tmp; ++cnt[tmp];
		}
		max=cnt[1], vt=1;
		for(int i=2;i<=1000;i++){
			if(cnt[i]>max) {
				vt=i;
				max=cnt[i];	
			}
		}
		cout<<vt<<'\n';
	}
	return 0;
}
