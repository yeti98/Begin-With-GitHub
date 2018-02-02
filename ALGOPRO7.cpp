#include <bits/stdc++.h>
using namespace std;
int main(){
	long n, k;
	vector<long> number;
	cin>>n>>k;
	for(long i=0;i<n;i++){
		long x; cin>>x;
		number.push_back(x);
	}
	sort(number.begin(), number.end());
	cout<<number[k];
	return 0;
}

