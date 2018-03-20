#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int sU, sD, minU, minD;
	sD=sU=0; minD=minU=999999999;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a, b;
		cin>>a>>b;
		sU+=a;
		sD+=b;
		if(a<minU) minU=a;
		if(b<minD) minD=b;
	}
	sU+=minD;
	sD+=minU;
	cout<< ((sU<sD) ? sD : sU);
	return 0;
}

