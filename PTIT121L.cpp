#include <iostream>
using namespace std;
int main(){
	long long amax=-1;
	long long arr[6];
	for(int i=0;i<6;i++) {
		cin>>arr[i];
		amax=max(amax,arr[i]);
	}
	long long mul=arr[0]*arr[1]+arr[2]*arr[3]+arr[4]*arr[5];
	if(mul== amax*amax){
		cout<<amax;
	}else cout<<0;
	return 0;
}
