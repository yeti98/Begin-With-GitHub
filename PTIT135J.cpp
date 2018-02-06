#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		double N, L, M;
		cin>>N>>L>>M;
		L=L/100;
		int cnt=0;
		while(N*pow(1+L,cnt)<M) ++cnt;
		cout<<cnt<<"\n";
	}
	return 0;
}
