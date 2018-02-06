#include <iostream>
#include <algorithm>
using namespace std;
long n, m;
long arr[1000005];
int binarySearch(long* arr, long n, long x){
	long low=0, high=n-1, ans=-1;
	while(low<=high){
		long middle=(low+high)/2;
		if(arr[middle]<=x){
			ans=middle;
			low=middle+1;
		}else	high=middle-1;
	}
	return ans;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr, arr+n);
	for(int i=0;i<m;i++){
		long x;
		cin>>x;
		long tmp=binarySearch(arr, n, x);
		if(tmp==-1) cout<<"0\n"; else cout<<tmp+1<<"\n";
	}
	return 0;
}
