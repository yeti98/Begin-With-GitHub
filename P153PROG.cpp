#include <iostream>
using namespace std;

int main(){
	long long n, k;
	cin>>n>>k;
	long long p;
	if(n%2==0) p=1+n/2;	else p=2+n/2;
	if(k<p){
		cout<<(long long) 1+(k-1)*2;
	}
	else cout<<(long long) 2+(k-p)*2;
	return 0;
}
