#include <iostream>
#include <vector>
using namespace std;
long long max(long long a, long long b){
   	return (a>b)? a : b;
}
long long l1, r1, l2, r2, k;
long long Solve(){
	long long res;
	if(l2<=l1 && r1<=r2){
		return (l1<=k && k<=r1)? r1-l1: r1-l1+1; 
	}
	if(l1<=l2 && r2<=r1){
		return (l2<=k && k<=r2)? r2-l2: r2-l2+1;
	}
	if(l2<=l1&& l1<=r2 && r2<=r1){
		return (l1<=k && k<=r2)? r2-l1: r2-l1+1;
	}
	if(l1<=l2&& l2<=r1 && r1<=r2){
		return (l2<=k && k<=r1)? r1-l2: r1-l2+1;
	}
	return 0;
}
int main(){
   	cin>>l1>>r1>>l2>>r2>>k;
   	cout<<Solve();
   	return 0;
}
