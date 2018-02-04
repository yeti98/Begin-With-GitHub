#include <iostream>
using namespace std;
int main(){
	long long m, n, a, row=0, col=0;
	cin>>m>>n>>a;
	if(m%a!=0) row=m/a+1; else row=m/a;
	if(n%a!=0) col=n/a+1; else col=n/a;
	cout<<(long long) row*col;
	return 0;
}
