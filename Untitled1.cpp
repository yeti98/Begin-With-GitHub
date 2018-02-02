#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long long number; cin>>number;
		if(number%2!=0) cout<<0<<'\n';
		else {
			int cnt=1;
			int temp=sqrt(number);
			for(int i=2;i<=temp;i++){
				if(number%i==0){
					if(i%2==0) ++cnt;
					if((number/i)%2==0 && (number/i)!=temp) ++cnt;
				}
			}
			cout<<cnt<<'\n';
		}
	}
	return 0;
}
