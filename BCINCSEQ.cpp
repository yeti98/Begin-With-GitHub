#include <bits/stdc++.h>
using namespace std;
int main(){
	long N; cin>>N;
	long arr[100005];
	for(int i=1;i<=N;i++) cin>>arr[i];
	long len=0, tmplen=1, i=1;
	while(i<=N){
		while(arr[i+1]>=arr[i] && i<N) {
			++i; ++tmplen;
		}
		if(tmplen>len) len=tmplen;
		tmplen=1;
		++i;
	}
	cout<<len;
	return 0;
}
