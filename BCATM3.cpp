#include <iostream>
using namespace std;
int arr[]={500,200,100, 50, 20, 10, 5,2, 1};
long process(long x){
	long cnt=0;
	for(int i=0;i<9;i++){
		int tmp=x/arr[i]; cnt+=tmp;
		x-=tmp*arr[i];
	}
	return cnt;
}
int main(){
	int test; cin>>test;
	while(test--){
		long x; cin>>x;
		cout<<process(x)<<"\n";
	}
	return 0;
}
