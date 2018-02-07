#include <iostream>
using namespace std;
int arr[101][101]={0};
void getMatrix(int sz){
	int t=1, lr=0, hr=sz-1, lc=0, hc=sz-1;
    while(hc>=lc && hr>=lr){
   		for(int i=lr;i<=hr;i++, t++) arr[lr][i]=t;
   		for(int i=lc+1;i<=hc;i++, t++) arr[i][hr]=t;
   		for(int i=hr-1;i>=lr;i--, t++) arr[hc][i]=t;
   		for(int i=hc-1;i>lc;i--, t++) arr[i][lr]=t;  
		lc++, lr++, hc--, hr--;
    }
}
int main(){
	int test; cin>>test;
	while(test--){	
		int sz, x, y; cin>>sz>>x>>y;
		getMatrix(sz);
		cout<<arr[x-1][y-1];
	}
	
}
