#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Time{
	int gio, phut, giay;
};
int cmp(Time a, Time b){
	if(a.gio> b.gio) return 0;
	else if(a.gio==b.gio){
		if(a.phut>b.phut) return 0;
		else if(a.phut==b.phut){
			if(a.giay>b.giay) return 0;
		}
	}
	return 1;
}
int main(){
	vector<Time> v;
	int test; cin>>test;
	while(test--){
		Time t; cin>>t.gio>>t.phut>>t.giay;
		v.push_back(t);
	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0;i<v.size();i++){
		cout<<v[i].gio<<" "<<v[i].phut<<" "<<v[i].giay<<"\n";
	}
	return 0;
}
