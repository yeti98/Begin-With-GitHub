#include <bits/stdc++.h>
using namespace std;
int n,m, sum, kq, a[105], x[105];
void Try(int i){
	for(int j=x[i-1]+1;j<=n-3+i;j++){
		x[i]=j;
		sum+=a[j];
		if(i==3 && sum<=m){
			if(m-sum<m-kq) kq=sum;
		}
		else if(sum<=m) Try(i+1);
		sum-=a[j];
	}
}
int main(){
	int test; cin>>test;
	while(test--){
		cin>>n>>m;
		sum=0; kq=-1;
		x[0]=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
		}
		Try(1);
		cout<<kq<<'\n';
	}
	return 0;
}
