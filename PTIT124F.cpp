#include <bits/stdc++.h>
using namespace std;
int unused[21]={0};
int x[21]={0};
int n, k=0;
vector<string> v;
int arr[11]={0, 0, 2, 2, 4, 96, 1024, 2880, 81024, 770144};
bool ngto(int i){
	if(i<2) return false;
	for(int j=2;j<=sqrt(i);j++)
		if(i%j==0) return false;
	return true;
}
void Try(int i){
	if(i>2*n) return;
	for(int j=2;j<=2*n;j++){
		if(unused[j]==0 && ngto(x[i-1]+j)){
			x[i]=j;
			unused[j]=1;
			if(i==2*n && ngto(x[2*n]+1)){
				for(int k=1;k<=2*n;k++) cout<<x[k]<<' ';
				cout<<'\n';
				++k;
				if(k==arr[n] || k==10000) exit(0);
			}else Try(i+1);
			unused[j]=0;
		}
	}
}
int main(){
	cin>>n;
	x[1]=1;
	unused[1]=1;
	for(int i=2;i<=n;i++) unused[i]=0;
	cout<<arr[n]<<'\n';
	Try(2);
	return 0;
}
