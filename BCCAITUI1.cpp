#include <iostream>
using namespace std;
int main(){
	long long f[105][105];
	int n, m;
	int w[105], v[105];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(w[i]<=j){
				f[i][j]=max(f[i-1][j], f[i-1][j-w[i]]+v[i]);
			}
			else f[i][j]=f[i-1][j];
		}
	}
	cout<<f[n][m];
	return 0;
}

