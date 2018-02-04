#include <iostream>
using namespace std;
int main(){
	long res=-1, lmax=0, lmin=0, rmax=0, rmin=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='R'){
			++rmin; ++rmax;
			if(rmax-lmin>res) res=rmax-lmin;
		}else if(s[i]=='L'){
			++lmin; ++lmax;
			if(lmax-rmin>res) res=lmax-rmin;
		} else {
			++lmax, ++rmax;
			if(lmax-rmin>res) res=lmax-rmin;
			if(rmax-lmin>res) res=rmax-lmin;
		}
	}
	cout<<res;
	return 0;
}
