#include <bits/stdc++.h>
using namespace std;
long long min(long long a, long long b){
	return (a<b)? a : b;
}
int main(){
	long long a, b, c, ans=0;
	cin>>a>>b>>c;
	ans=min(2*a+2*b, min(a+b+c, min(2*a+2*c, 2*b+2*c)));
	cout<<ans;
	return 0;
}
