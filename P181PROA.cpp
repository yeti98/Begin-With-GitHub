#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
		int tmp; cin>>tmp;
		v.push_back(tmp);
	}
	if(n%2){
		if(v[0]%2 && v[v.size()-1]%2){
			cout<<"yes";
			return 0;
		}
	}
	cout<<"no";
	return 0;
}
