#include <iostream>
using namespace std;
int main(){
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int start=-1, end=-1;
	for(int i=0;i<101;i++){
		if(s[i]=='G') start=i;
		if(s[i]=='T') end=i;
	}
	if(start>end) {
		int temp=start;
		start=end;
		end=temp;
	}
	while(start<=end){
		if(s[start]=='#'){
			cout<<"NO";
			return 0;
		}
		if(start==end) {
			cout<<"YES";
			return 0;
		}
		start+=k;
	}
	cout<<"NO";
	return 0;
}
