#include <iostream>
#include <vector>
using namespace std;
int main(){
	long n[4];
	vector<long> cnt;
	for(int i=0;i<4;i++) cin>>n[i];
	for(int i=0;i<4;i++){
		bool check=true;
		for(int j=0;j<cnt.size();j++)
			if(cnt[j]==n[i]) check=false;
		if(check)  cnt.push_back(n[i]);
	}
	cout<<4-cnt.size();
	return 0;
}
