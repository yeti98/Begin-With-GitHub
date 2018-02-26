#include <bits/stdc++.h>
using namespace std;
int main(){
	long long sum=1, h=0, n, idx=1;
	cin>>n;
	while(n-sum>=0) {
		n-=sum; 
		++idx;
		sum+=idx;
		++h;
	}
	cout<<h;
	return 0;
}
