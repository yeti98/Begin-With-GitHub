#include <iostream>
using namespace std;
int main(){
	while(1){
		int n; cin>>n;
		if(n==0) break;
		int arr[50]={0};
		for(int i=1;i<=6*n;i++){
			int x; cin>>x;
			arr[x]=1;
		}
		int check=1;
		for(int i=1;i<=50;i++)
			if(arr[i]==0){
				check=0; break;
			}
		if(check) cout<<"Yes\n"; else cout<<"No\n";
	}
	return 0;
}
