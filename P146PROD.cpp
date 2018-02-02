#include <iostream>
using namespace std;
int main(){
	int n, solve=0;
	cin>>n;
	while(n--){
		int a, b, c, dem1=0;
		cin>>a>>b>>c;
		if(a==1) ++dem1; 
		if(b==1) ++dem1; 
		if(c==1) ++dem1; 
		if(dem1>=2) ++solve;
	}
	cout<<solve;
	return 0;
}
