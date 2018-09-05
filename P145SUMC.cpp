#include <bits/stdc++.h>
using namespace std;
vector<long> v;
long ucln(long long a, long long b){
	long tmp;
	while(b!=0){
		tmp = a%b;
		a=b;
		b=tmp;
	}
	return a;
}
void tim_uoc(long n){
	for(long i=1;i<=sqrt(n);i++){
		if(n%i==0){
			long tmp = n/i;
			if(i*i!=n){
				v.push_back(i);
				v.push_back(tmp);
			}
			else v.push_back(i);
		}
	}
}
long bsearch(long l, long r){
	vector<long>::iterator low1,low2;
  	low1=lower_bound(v.begin(), v.end(), l);
  	low2=lower_bound(v.begin(), v.end(), r);
  	long id1=low1-v.begin(), id2=low2-v.begin();
  	while(id2>=id1){
  		if(v[id2]>=l && v[id2]<=r) return v[id2];
  		id2--;	
	}
  	return -1;
}
int main(){
	long long a=9, b=27;
//	cin>>a>>b;
	long c = ucln(a,b);
	tim_uoc(c);
	sort(v.begin(), v.end());
	cout<<"idx:\t"<<lower_bound(5);
//	int q; cin>>q;
//	long long l, r;
//	while(q--){
//		cin>>l>>r;
//		cout<<bsearch(l,r)<<"\n";
//	}
	return 0;
}
