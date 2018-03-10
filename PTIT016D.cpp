#include <bits/stdc++.h>
using namespace std;
int cmp(long long a, long long b){
	return a>b;
}
int main(){
	long long n, k, arr[100005];
    cin>>n>>k;
    for(long long i = 0; i<n; i++)	cin>>arr[i];
    sort(arr + 1, arr + n, cmp);
    long long sum=0;
    for (long i=0;i<=k;i++)	sum+=a[i];
    for (long i=k+1;i<n;i++)	sum-=a[i];
    cout << s;
    return 0;
}
