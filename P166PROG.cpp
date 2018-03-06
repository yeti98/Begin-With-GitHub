#include <bits/stdc++.h>
using namespace std;
int ar[]={0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
int dem(int a, int b){
	if(a==b) return 0;
	int j=10+a, tmp1, tmp2;
	tmp1=j-1;
	tmp2=j+1;
	while(ar[tmp1]!=b && ar[tmp2]!=b){
		--tmp1;
		++tmp2;
	}
	if(ar[tmp1]==b) return abs(tmp1-j);
	return abs(tmp2-j);
}
int main(){
	int n; cin>>n;
	string a, b;
	cin>>a>>b;
	long kq=0;
	for(int i=0;i<n;i++){
		kq+=dem(a[i]-'0', b[i]-'0');
	}
	cout<<kq;
	return 0;
}
