#include <iostream>
#include <map>
int n, a[500000];
long long res,k;
int l, r;
std::map <int, int> m;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	l = n + 1;
	for (int j=1; j<=n; j++){
		m[a[j]]++;
		if (m[a[j]] == k){
			l = 1; r = j;
			break;	
		}
	}
	res = 0;
	int ok = 1;
	while (l <= n){
		if (ok){
			res += (n - r + 1);
			m[a[l]]--;
			if (m[a[l]] == k - 1) ok = 0;
			l++;
		}
		else{
			if (r == n) break;
			r++;
			m[a[r]]++;
			if (m[a[r]] == k) ok = 1;
		}
	}
	printf("%llu", res);
	return 0;
}
