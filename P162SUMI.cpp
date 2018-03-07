#include <bits/stdc++.h>
using namespace std;
int a[4], smax=-1, s, dem=0;
void Try(int s){
	if(s==0) {
		if(dem>smax) smax=dem;
		return;
	}
	for(int j=1;j<=3;j++){
		if(s-a[j]>=0) {
			++dem;
			if((dem+(s-a[j])/a[1])>smax) Try(s-a[j]);
			--dem;
		}
	}
}
int main(){
	cin>>s>>a[1]>>a[2]>>a[3];
	sort(a+1,a+4);
	Try(s);
	cout<<smax;
	return 0;
}
