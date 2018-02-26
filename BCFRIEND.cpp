//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//	long long N, B; cin>>N>>B;
//	int arr[100005];
//	for(int i=1;i<=N;i++) cin>>arr[i];
//	long long ans=0;
//	for(long i=1;i<N;i++){
//		for(long j=i+1;j<=N;j++){
//			if(arr[i]+arr[j]==B) ++ans;
//		}
//	}
//	cout<<ans;
//	return 0;
//}
// 50 points

#include <bits/stdc++.h>
using namespace std;
int main(){
	long long N, B; cin>>N>>B;
	int a[100005];
	for(int i=1;i<=N;i++) cin>>a[i];
	sort(a + 1, a + N + 1);
	long long ans = 0;
	int l = 1, r = N;
	while (l <= r){
		long long sum = a[l] + a[r];
		if (sum > B) { 
			--r;
		}
		else if (sum < B) {
			++l;
		} else {
			int xl = l + 1;
			while (a[xl] == a[l]) ++xl;
			int xr = r - 1;
			while (a[xr] == a[r]) --xr;
			int cl = xl - l;
			int cr = r - xr;
			if (a[l] == a[r]) {
				assert(cl == cr);
				ans += 1ll * cl * (cl - 1) / 2;
			} else {
				ans += 1ll * cl * cr;
			}
			l = xl;
			r = xr;
		}
	}
	cout<<ans;
}
// code cop: 100 points

