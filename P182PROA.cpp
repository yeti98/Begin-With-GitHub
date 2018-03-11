#include <bits/stdc++.h>
using namespace std;
long long c,v0,v1,a,l, day=0, r, tmp;
 
int main(){
	cin>>c>>v0>>v1>>a>>l;
	tmp=v0;
	day=1;
	r=v0;
	while(r<c){
		r-=l;
		if(tmp+a>v1) tmp=v1; else tmp+=a;
		r+=tmp;
		++day;
	}
	cout<<day;
	return 0;
}
