#include<bits/stdc++.h>
using namespace std;
//goc=(1-2/socanh)*180
int a[22] ={60,90,108,120,135,140,144,150,156,160,162,165,168,170,171,172,174,175,176,177,178,179};
int check(int x){
	for(int i=0;i<22;i++)
		if(x==a[i]) return 1;
	return 0;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int corner;
		cin>>corner;
		if(check(corner)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
