#include <bits/stdc++.h>
using namespace std;
//https://www.hackerrank.com/challenges/substring-diff/editorial
//https://www.quora.com/What-is-the-algorithmic-approach-to-solve-hackerrank-problem-Substring-Diff
string a, b;
long S;
long getMax(long a, long b){
	if(a>b) return a;
	return b;
}
long solve(){
	long ans=0, bad;
	int len=a.length();
	for(int i=1;i<=len;i++){
		for(int j=1;j<=len;j++){
			bad=0;
			for(int L=0;L<=len;L++){
				
			}
		}
	}
	return ans;
}
int main(){
	int test; cin>>test;
	while(test--){
		cin>>S>>a>>b;
		a='0'+a; b='0'+b;
		cout<<solve()<<"\n";
	}
	return 0;
}

