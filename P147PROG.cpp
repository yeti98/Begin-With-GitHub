#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long test =1;
	while(1){
		long n;
		cin>>n;
		if(n<=0) break;
		double a, b, x, y, m, ma=0, mb=0, ms=0;
		for(long i=0;i<n;i++){
			cin>>x>>y>>m;
			ms+=m;
			ma+=m*x; mb+=m*y;
		}
		a=ma/ms; b=mb/ms;
		cout<<"Case "<<test<<": ";
		cout<<fixed<<setprecision(2)<<a<<" "<<b<<"\n";
		test++;
	}
	return 0;
}
