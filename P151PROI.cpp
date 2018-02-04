#include <iostream>
using namespace std;
int getNumber(long long x){
	int sum=0;
	while(x>0){
		sum+=x%10;
		x/=10;
	}	
	return sum;
}
int main(){
	int test; cin>>test;
	while(test--){
		long long x;
		cin>>x;
		while(x>=10) x=getNumber(x);
		cout<<x<<'\n';	
	}
	return 0;
}
