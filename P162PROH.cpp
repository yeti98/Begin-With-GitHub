#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[1000];
	a[1]=1;
	int x, dem=0;
	cin>>x;
	for(int i=2;i<1000;i++)
		a[i]=a[i-1]+i;
	for(int i = 1; i < 1000; i++){
		if(x>=0){
			x=x-a[i];
			dem++;
		} else break;
	}
	cout<<dem- 1;
	return 0;
}
