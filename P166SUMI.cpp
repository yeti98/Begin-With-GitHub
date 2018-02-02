#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1001];
	int cnt=0;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		if(arr[i]==0) {
			++cnt;
			if(cnt>1) {
				cout<<"NO";
				return 0;
			}
		}
	}
	if(cnt==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
