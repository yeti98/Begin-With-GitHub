#include <bits/stdc++.h>
using namespace std;
long arr[11][11], x[11], n;
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=1;i<=n;i++){
			x[i]=i;
			for(int j=1;j<=n;j++){
				cin>>arr[i][j];
			}
		}
		long long ans=1e12;
		do{
			long long tmp=0;  
			for(int i=1;i<=10;i++) tmp+=arr[i][x[i]];
			if(tmp<ans) ans=tmp;
		}while(next_permutation(x+1, x+1+n));
		cout<<ans<<'\n';
	}
	return 0;
}
