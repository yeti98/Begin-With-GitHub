#include <iostream>
#include <vector>
using namespace std;
long c, f=0; int n;
int x[20]={0}, w[20];
void capnhat(){
	long tong=0;
	for(int i=1;i<=n;i++) tong+=w[i]*x[i];
	if(tong>f && tong<=c) f=tong;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n+1)	capnhat();
		else Try(i+1);
	}
}
int main(){
	cin>>c>>n;
	for(int i=1;i<=n;i++) cin>>w[i];
	Try(1);
	cout<<f;
	return 0;
}
