#include <bits/stdc++.h>
using namespace std;
int a[100005];
//use map faster than normal array
map<int, int> cnt;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int r=0, len=0, cur_m=0, ans=0;
	for(int i=1;i<=n;i++){
		while(r<n && cur_m<m){
			++r;
			if(cnt[a[r]]==0) ++cur_m;
			++cnt[a[r]]; 
		}
		while(r<n && cnt[a[r+1]]){
			++r;
			++cnt[a[r]];
		}
		len = r-i+1;
//		cout<<i<<" "<<r<<" "<<len<<"\n";
		if(len>ans) ans=len;
		--cnt[a[i]];
		if(cnt[a[i]]==0) --cur_m;
	}
	cout<<ans;
	return 0;
}
