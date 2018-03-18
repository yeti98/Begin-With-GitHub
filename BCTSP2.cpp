#include <bits/stdc++.h>
using namespace std;
long long n, a[1005][1005], x[1005], unused[1005]={0};
long long cmin, f, fopt;
void Try(long long i){
	for(long long j=2;j<=n;j++){
		if(unused[j]==0){
			unused[j]=1;
			x[i]=j;
			f+=a[x[i-1]][j];
			if(i==n){
				if((f+a[x[n]][1])<fopt) fopt=f+a[x[n]][1];
			}else if((f+(n-i+1)*cmin)<fopt) Try(i+1);
			f-=a[x[i-1]][j];
			unused[j]=0;
		}
	}
}
int main(){
	cin>>n;
	f=0;
	cmin=999999999999;
	fopt=999999999999;
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]<cmin && a[i][j]!=0) cmin=a[i][j];
		}
	}
	x[1]=1;
	Try(2);
	cout<<fopt;
	return 0;
}
