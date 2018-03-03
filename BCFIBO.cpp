#include <iostream>
using namespace std;
#define MAX 1000000007
int main(){
	long long fi[1000005];
	long n; cin>>n;
	fi[0]=0ll, fi[1]=1ll;
	for(int i=2;i<=n;i++){
		fi[i]=(fi[i-1]%MAX+fi[i-2]%MAX)%MAX;
	}
	cout<<fi[n];
	return 0;
}
