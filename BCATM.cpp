#include <iostream>
using namespace std;
int a[25], x[25], n, S, smin=22;
void Try(int i){
	if(i>20) return;
	for(int j=1;j>=0;j--){
		x[i]=j;
		if(i==n){
			int dem=0,tmp=0;
			for(int k=1;k<=20;k++)
				if(x[k]) {
					tmp+=a[k];
					++dem;
				}
			if(S==tmp && dem<smin) {
				smin=dem;
			}
		}else Try(i+1);
	}
}
int main(){
	cin>>n>>S;	
	for(int i=1;i<=n;i++) cin>>a[i];
	Try(1);
	if(smin==22) cout<<-1;
	else cout<<smin;
}
