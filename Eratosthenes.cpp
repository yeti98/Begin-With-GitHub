//listing n prime number;
#include <iostream>
#include <cmath>
using namespace std;
int n;
int Prime[10001];
void preprocess(){
	for(int i=2;i<=sqrt(10000);i++){
		if(Prime[i]){
			for(int j=i*i;j<10000;j+=i) Prime[j]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=2;i<=10000;i++) Prime[i]=1;
	preprocess();
	int cnt=0, idx=2;
	while(cnt<n){
		if(Prime[idx]==1){
			cout<<idx<<" ";
			++cnt;
		}
		++idx;
	}
}
