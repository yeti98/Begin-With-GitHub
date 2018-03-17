#include <bits/stdc++.h>
using namespace std;
long long MOD=1e6+7;
int main(){
	int x[1005], L[1005]={0};
	int n; cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i];
	//Quy hoach dong
	x[0]=-MOD; x[n+1]=MOD;
	L[n+1]=0;
	int lmax=-1;
	for(int i=n;i>=0;i--){
		int jMax=n+1;
		for(int j=i+1;j<=n+1;j++){
			if(x[j]>x[i] && L[j]>L[jMax]){
				jMax=j;
			}
			L[i]=L[jMax]+1;
			if(L[i]>lmax && i>0 && i<=n) lmax=L[i];
		}
	}
//	for(int i=0;i<=n+1;i++) cout<<L[i]<<" ";
	cout<<lmax;
	return 0;
}
