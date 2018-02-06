#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long n;
	int test; cin>>test;
	while(test--){
		cin>>n;
		long long sum=1+n;
		if(n==1) sum=1;
		else{
			for(long long i=2;i<=sqrt(n);i++)
				if(n%i==0){
					sum=sum+i;
					if(i*i!=n) sum+=n/i;
				}
			} 
		cout<<sum<<"\n";
	}
	return 0;
}
