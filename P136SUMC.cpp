#include <iostream>
using namespace std;
int main(){
	string a, b;
	cin>>a>>b;
	int r1=a.length()-1, r2=b.length()-1;
	while(a[r1]==b[r2]) --r1, --r2;
	if(a[r1]>b[r2]) {
		for(int i=a.length()-1; i>=0; i--) cout<<a[i];	
	}
	else {
		for(int i=b.length()-1; i>=0; i--) cout<<b[i];	
	}
}
