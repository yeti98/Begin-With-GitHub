#include <iostream>
using namespace std;
int a[35], x[35], n, S, smin=32, dem;
void Try(int S, int i){
	if(S==0 && dem<smin) {
		smin=dem;
	}
	if(i>n || S==0) return;
	for(int j=1;j>=0;j--){
		x[i]=j;
		if(S-a[i]*x[i]>=0){
			if(j) ++dem;
			Try(S-a[i]*x[i], i+1);
			if(j) --dem;
		}
	}
}
int main(){
	cin>>n>>S;	
	for(int i=1;i<=n;i++) cin>>a[i];
	dem=0;
	Try(S,1);
	cout<<smin;
}
/* Try (S, i) Tong S tai buoc thu i*/
