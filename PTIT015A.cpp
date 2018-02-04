#include <iostream>
#include <vector>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		string tmp;
		vector<int> freq(10,0);
		for(int i=0;i<3;i++) {
			cin>>tmp;
			for(int j=0;j<tmp.size();j++) ++freq[tmp[j]-'0'];
		}
		for(int i=9;i>=0;i--){
			while(freq[i]--) cout<<i;
		}
		cout<<"\n";
	}
	return 0;
}
