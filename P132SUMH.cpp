#include <iostream>
using namespace std;
int minute[1005]={0};
string result(int x){
	if(minute[x]==0) return "none";
	if(minute[x]==1) return "one";
	return "both";
}
int main(){
	int a, b, c,d;
	int P, M, G;
	cin>>a>>b>>c>>d>>P>>M>>G;
	int i=0;
	if(a!=0){
		i=1;
		while(i<1002) {
			++minute[i]; --minute[i+a];	i=i+a+b;
		}
	}
	if(b!=0){
		i=1;
		while(i<1002) {
			++minute[i]; --minute[i+c];	i=i+c+d;
		}
	}
	minute[0]={0};
	for(int i=1;i<=1000;i++) minute[i]+=minute[i-1];
	cout<<result(P)<<'\n';
	cout<<result(M)<<'\n';
	cout<<result(G)<<'\n';
	return 0;
}
