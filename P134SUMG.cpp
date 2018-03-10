#include <bits/stdc++.h>
using namespace std;
struct gv{
	int chua, cay;
};
gv giavi[11];
int x[11], n, unused[11]={0}, cnt;
long long smin;
void Try(int i){
	for(int j=1;j>=0;j--){
		if(!unused[i]){
			x[i]=j;
			if(x[i]) ++cnt;
			if(i==n && cnt!=0){
				long chua=1, cay=0;
				for(int k=1;k<=n;k++){
					if(x[k]){
						chua*=giavi[k].chua;
						cay+=giavi[k].cay;
					}
				}
				if(abs(chua-cay)<smin) smin=abs(chua-cay);
			}
			else if(i!=n) Try(i+1);
			if(x[i]) --cnt;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>giavi[i].chua>>giavi[i].cay;
	}
	if(n==1){
		cout<<abs(giavi[1].chua-giavi[1].cay);
		return 0;
	}
	smin=99999999999999; cnt=0;
	Try(1);
	cout<<smin;
	return 0;
}
