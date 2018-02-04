#include <iostream>
using namespace std;
int main(){
	int cnt=1;
	while(1){
		string a, b;
		cin>>a>>b;
		if(a=="END") break;
		int freqa[26]={0}, freqb[26]={0};
		for(int i=0;i<a.length();i++)	++freqa[a[i]-'a'];	
		for(int i=0;i<b.length();i++)	++freqb[b[i]-'a'];
		int check=1;
		for(int i=0;i<26;i++){
			if(freqa[i]!=freqb[i]){
				check=0;
				break;
			}
		}
		cout<<"Case "<<cnt<<": ";
		if(check) cout<<"same\n"; else cout<<"different\n";
		++cnt;
	}
	return 0;
}
