#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a;
	cin>>b;
	vector<int> freqa(26,0);
	vector<int> freqb(26,0);
	for(int i=0;i<a.length();i++) ++freqa[a[i]-'a'];
	for(int i=0;i<b.length();i++) ++freqb[b[i]-'a'];
	long long sum=0;
	for(int i=0;i<26;i++) sum+=abs(freqa[i]-freqb[i]);
	cout<<sum;
	return 0;
}
