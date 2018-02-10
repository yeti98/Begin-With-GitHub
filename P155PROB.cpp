#include <iostream>
using namespace std;
int main(){
	long X, S, tmp; cin>>X>>S;
	tmp=X*S;
	long arr[5];
	for(int i=0;i<5;i++) cin>>arr[i];
	for(int i=0;i<5;i++) cout<<(long) arr[i]-tmp<<" ";
	return 0;
}
