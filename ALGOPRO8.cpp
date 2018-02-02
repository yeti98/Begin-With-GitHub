#include <iostream>
using namespace std;
int main(){
	int m, n;
	cin>>m>>n;
	int s=min(m,n);
	m-=s; n-=s;
	cout<<s<<" ";
	if(m>0){
		cout<<m/2;
	}else {
		if(n>0) cout<<n/2;
		else cout<<0;	
	}
	return 0;
}
