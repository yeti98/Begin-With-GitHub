#include <bits/stdc++.h>
using namespace std;
struct cv{
	int bd,kt;
};
int cmp(cv a, cv b){
	if(a.kt>b.kt)	return 0;
	return 1;
}
int main(){
	cv arr[100005];
	int n, kq=0; cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i].bd>>arr[i].kt;
	sort(arr+1, arr+1+n, cmp);
	cv tmp=arr[1];
	int cnt=1;
	for(int i=2;i<=n;i++){
		if(arr[i].bd>tmp.kt){
			++cnt;
			tmp=arr[i];
		}
	}
	cout<<cnt;
	return 0;
}
