#include <bits/stdc++.h>
using namespace std;

long long MOD= 1e9+7;
long long timMOD(long long x){
	if(x>=0) return x%MOD;
	return MOD-(abs(x)%MOD);
}
int main(){
	long long x, y, n;
	cin>>x>>y>>n;
	long long arr[7]={0};
	arr[1]=timMOD(x);
	arr[2]=timMOD(y);
	arr[3]=timMOD(arr[2]-arr[1]);
	arr[4]=timMOD(arr[3]-arr[2]);
	arr[5]=timMOD(arr[4]-arr[3]);
	arr[0]=timMOD(arr[5]-arr[4]);
	cout<<arr[n%6];
	return 0;
}

