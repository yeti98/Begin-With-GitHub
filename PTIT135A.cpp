#include <iostream>
using namespace std;
int count[105]={0};
int main(){
	int a, b, c; cin>>a>>b>>c;
	for(int i=1;i<=3;i++){
		int t1, t2;
		cin>>t1>>t2;
		for(int i=t1;i<t2;i++) ++count[i];
	}
	int cost=0;
	for(int i=1;i<=100;i++) {
		if(count[i]==1) cost+=a;
		else if(count[i]==2) cost+=2*b;
		else if(count[i]==3) cost+=3*c;
	}
	cout<<cost<<"\n";
	return 0;
}
