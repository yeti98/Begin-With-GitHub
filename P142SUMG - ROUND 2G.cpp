#include <iostream>
#include <vector>
using namespace std;
int main(){
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		string s;
		getline(cin,s);
		vector<int> freq(26,0);
		for(int i=0;i<s.length();i++) if(s[i]!=' ') ++freq[s[i]-'A'];
		int max=-1, sl=0, vt;
		for(int i=0;i<26;i++){
			if(freq[i]>max) max=freq[i], vt=i, sl=1;
			else if(freq[i]==max) ++sl;
		}
		if(sl>=2) cout<<"NOT POSSIBLE"<<'\n';
		else{
			int d='E'-vt-'A';
			if(d<=0) d=-d; else d=26-d;
			cout<<d<<' ';
			for(int i=0;i<s.length();i++){
				if(s[i]==' ') cout<<s[i];
				else{
					int x=s[i]-'A'-d;
					if(x<0) cout<<char(26+x+'A'); else cout<<char(x+'A');
				}
			}
			cout<<'\n';
		}
	}
	return 0;
}
