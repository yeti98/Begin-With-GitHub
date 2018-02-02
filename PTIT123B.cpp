#include <iostream>
#include <cmath>
using namespace std;
long long x[21];
int n;
bool ketthuc(){
	for(int i=0;i<n-1;i++)
		if(x[i]!=x[i+1]) return false;
	return true;
}
int main(){
	int test=1;
	while(1){
		cin>>n; int dem=0;
		if(n==0) break;
		for(int i=0;i<n;i++) cin>>x[i];
		while(!ketthuc() && dem<=1000){
			int t=x[0];
			for(int i=0;i<n-1;i++) x[i]=abs(x[i]-x[i+1]);
			x[n-1]=abs(x[n-1]-t);
			dem++;
		}
		cout<<"Case "<<test<<": ";
		if(dem>1000) cout<<"not attained\n";
		else cout<<dem<<" iterations\n";
		test++;
	}
	return 0;
}
