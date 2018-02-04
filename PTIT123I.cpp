#include <iostream>
#include <cmath>
using namespace std;
int n=123456*2+1;
int isPrime[246915]={0};
int cnt[246915]={0};
void prepair(){
	for(int i=2;i<=sqrt(n);i++){
		if(isPrime[i]==0){
			for(int j=i*i;j<n;j+=i) isPrime[j]=1;
		}
	}
	int count=0;
	for(int i=2;i<n;i++){
		if(isPrime[i]==0){
			count++;
			cnt[i]=count;
		}
		else cnt[i]=count;
	}
}
int main(){
	long n;
	prepair();
	while(1){
		cin>>n;
		if(n==0) return 0;
		cout<<cnt[2*n]-cnt[n]<<'\n';
	}
	return 0;
}
