#include<bits/stdc++.h>
using namespace std;
int n,k,unused[20]={0},smin=99999999;
string a[9];
int x[10];
int ham(string tmp){
	int kq=0,muoi=1;
	for(int i=tmp.length()-1;i>=0;i--){
		kq+=(tmp[i]-48)*muoi;
		muoi*=10;
	}
	return kq;
}
void xuly(){
	int b[10];
	for(int i=1;i<=n;i++){
		string tmp="";
		for(int j=1;j<=k;j++) tmp+=a[i][x[j]];
		b[i]=ham(tmp);
	}
	int maxx,minn;
	maxx=b[1];
	minn=b[1];
	for(int i=2;i<=n;i++){
		if(minn>b[i]) minn=b[i];
		if(maxx<b[i]) maxx=b[i];
	}
	if(maxx-minn<smin) smin=maxx-minn;
}
void Try(int i){
	for(int j=1;j<=k;j++){
		if(unused[j]==0){
			x[i]=j;
			unused[j]=1;
			if(i==k){
				xuly();
			}
			else Try(i+1);
			unused[j]=0;
		}
	}
}
main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]='0'+a[i];
	}
	Try(1);
	cout<<smin;
}
