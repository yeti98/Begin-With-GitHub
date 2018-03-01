#include <bits/stdc++.h>
using namespace std;
int main(){
	int N=0;
	vector<float> v;
	cin>>N;
	for(int i=0;i<N;i++){
		int tmp; cin>>tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	int max=-1, idx=0;
	while(idx<v.size()){
		int cnt=1;
		while(v[idx+1]==v[idx] && idx<v.size()-1) ++cnt, ++idx;
		if(cnt>max) max=cnt;
		++idx;
	}
	//max la so lan xuat hien toi da cua 1 phan tu trong mang => kq la: N-max;
	cout<<N-max;
	return 0;
}
// 6
// 1 2 3 2 3 5
