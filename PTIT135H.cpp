#include <iostream>
#include <cmath>
float arr[260], brr[260];
using namespace std;
int size;
void Try(int n){
	if(n>size) return;
	int idx=1;
	for(int i=1;i<=n/2;i++){
		brr[idx]=(arr[i]+arr[n/2+i])/2;
		brr[idx+1]=arr[i]-brr[idx];
		idx+=2;
	}
	for(int i=1;i<=n;i++) arr[i]=brr[i];
	Try(2*n);
}
int main(){
	while(1){
		cin>>size;
		if(size==0) break;
		for(int i=1;i<=size;i++) {
			cin>>arr[i]; brr[i]=arr[i];	
		}
		Try(2);
		for(int i=1;i<=size;i++) cout<<arr[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
