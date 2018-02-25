#include <bits/stdc++.h>
using namespace std;
int main(){
	int v_size;
	cin>>v_size;
	int count[1000005];
	for(int i=0;i<v_size;i++){
		int tmp; cin>>tmp; ++count[tmp];
	}
	int cnt=0;
	for(int i=0;i<v_size;i++){
		for(int j=0;j<count[i];j++){
			if(cnt==v_size) break;
			else cout<<i<<" ", ++cnt;
		}
	}
	return 0;
}
