#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(string i, string j) {
	return i+j<j+i;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<string> v;
		for(int i=0;i<n;i++){
			string temp; cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end(),cmp);
		string res;
		for(int i=0;i<v.size();i++) res+=v[i];
		cout<<res<<'\n';
	}
	return 0;
}
