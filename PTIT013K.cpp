#include <bits/stdc++.h>
using namespace std;
long long gt[]={0,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		long long kq=0, cnt=s.length();
		for(int i=0;i<s.length();i++, cnt--)
			kq+=(s[i]-'0')*gt[cnt];
		cout<<kq<<'\n';
	}
	return 0;
}
