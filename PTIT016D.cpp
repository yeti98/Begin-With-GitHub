#include <bits/stdc++.h>
using namespace std;
int cmp(long long a, long long b){
	return a>b;
}
int main(){
	long long n, k, a[100005];
    cin>>n>>k;
    for(long long i = 0; i<n; i++)	cin>>a[i];
    sort(a + 1, a + n, cmp);
    long i;
    long long s = 0;
    for (i = 0; i <= k; i++)	s = s + a[i];
    for (i = k+1; i <n; i++)	s = s - a[i];
    cout << s;
    return 0;
}
