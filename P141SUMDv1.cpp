#include <iostream>
#include <map>
std::map<int, int> m;
int a[400004];
long n, k;
long long res; //res must be long long
int main(){
	res=0;
	scanf("%ld%ld",&n,&k);
	for(long i=1;i<=n;i++) scanf("%d", &a[i]);
	long l=0, r=0;
	while(r<=n){
		while(r<=n && m[a[r]] < k){
			r++;
			m[a[r]]++;
		}
		if(r<=n) {
			res+=(n-r+1);
			l++;
			m[a[l]]--;
		}
	}
	printf("%lld",res);
	return 0;
}

