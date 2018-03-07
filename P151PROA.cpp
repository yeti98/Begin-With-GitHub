#include <bits/stdc++.h>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n;
		string s;
		cin>>s;
		int freq[10]={0};
		for(int i=0;i<s.length();i++){
			switch(s[i]-'0'){
				case 0: ++freq[0]; break;
				case 1: ++freq[1]; break;
				case 2: ++freq[2]; break;
				case 3: ++freq[3]; break;
				case 4: ++freq[3]; freq[2]+=2; break;
				case 5: ++freq[5]; break;
				case 6: ++freq[5]; ++freq[3]; break;
				case 7: ++freq[7]; break;
				case 8: ++freq[7]; freq[2]+=3; break;
				case 9: ++freq[7]; freq[3]+=2; ++freq[2]; break;
			}
		}
		for(int i=9;i>=2;i--){
			while(freq[i]) {
				cout<<i; --freq[i];	
			}
		}
		cout<<'\n';
	}
	return 0;
}
