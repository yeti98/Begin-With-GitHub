#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d;
bool isFinish(){
	if(a==b && a==c && a==d) return true;
	return false;
}
int main(){
	while(1){
		cin>>a>>b>>c>>d;
		if(a==0 && b==0 && c==0 && d==0) break;
		long long cnt=0;
		while(!isFinish()) {
			long long tmp=a;
			a=abs(a-b); b=abs(b-c); c=abs(c-d); d=abs(d-tmp);
			++cnt;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}
