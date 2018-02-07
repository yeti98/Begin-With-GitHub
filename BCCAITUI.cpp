#include <iostream>
#include <map>
using namespace std;
int main(){
	map<int, map <int, int> >f;
	int n, m;
	int w[105], v[105];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=m;j++){
			if(w[i]<=j){
				f[i][j]=max(f[i-1][j-w[i]]+v[i], f[i-1][j]);
			}
			else f[i][j]=f[i-1][j];
		}	
	}
	cout<<f[n-1][m];
	return 0;
}
