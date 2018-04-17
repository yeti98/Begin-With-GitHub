#include <bits/stdc++.h>
using namespace std;
int INF=1e9+7;
int mod(long long x){
	while(x<0) x+=INF;
	return x%INF;
}
int main(){
	string s; cin>>s;
	long long sum=0;
	long long f=1;
	for(int i=s.length()-1;i>=0;i--){
		sum=mod(sum+(s[i]-'0')*f*(i+1));
		f=mod(f*10+1);
	}
	cout<<sum;
	return 0;
}

