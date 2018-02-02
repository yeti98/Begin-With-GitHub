#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct person{
	string name;
	int day, month, year;
};
int cmp(person a, person b){
	if(a.year>b.year) return 1;
	if(a.year==b.year){
		if(a.month>b.month) return 1;
		if(a.month==b.month) {
			if(a.day>b.day) return 1;
			if(a.day==b.day){
				if(a.name>b.name) return 1;
				return 0;
			}
			return 0;
		}
		return 0;
	}
	return 0;
}
int main(){
	int test; cin>>test;
	vector<person> v;
	while(test--){
		person p;
		cin>>p.name>>p.day>>p.month>>p.year;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), cmp);
	cout<<v[0].name<<"\n"<<v[v.size()-1].name;
}
