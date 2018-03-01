#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int arr[100005];
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>arr[i];
	int l=1, r=n, suml=arr[1], sumr=arr[n], teo=0;
	while(l<r){
		while(suml<=sumr) {
			 ++l; suml+=arr[l];
		}
		while(sumr<suml){
			 --r; sumr+=arr[r]; ++teo;
		}
	}
	cout<<n-teo<<" "<<teo;
}
