#include <bits/stdc++.h>
using namespace std;
int main(){
	long n; cin>>n;
	long arr[100005];
	for(long i=1;i<=n;i++) cin>>arr[i];
	sort(arr+1, arr+n+1);
	long long sum=0, ans=0;
	for(int i=1;i<=n;i++){
		if(sum<=arr[i]) {
			sum+=arr[i];
			++ans;
		}
	}
	cout<<ans;
	return 0;
};
