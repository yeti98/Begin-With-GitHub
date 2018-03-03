#include <bits/stdc++.h>
#define MAX 1000000007
using namespace std;
int main(){
	long long x=0, y=1;
	long long n, a, sum;
	cin>>a>>n;
	sum=a;
	for(int i=2;i<=n;i++){
		long long z=(x%MAX+y%MAX)%MAX;
		sum+=((z*a)%MAX);
		x=y; y=z;
	}
	cout<<sum;
	return 0;
}
