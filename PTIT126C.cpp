#include <iostream>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		long arr[100005];
		long N, S; 
		cin>>N>>S;
		for(long i=0;i<N;i++) cin>>arr[i];
		long j=0, length=0, min=999999, sum=0;
		for(int i=0;i<N;i++){
			sum+=arr[i]; length++;
			while(sum-arr[j]>=S) {
				sum-=arr[j]; ++j;
				length--;
			}
			if(sum>=S){
				if(length<min) min=length;
			}
		}
		if(min==999999) cout<<"0\n";
		else cout<<min<<'\n';
	}
	return 0;
}
