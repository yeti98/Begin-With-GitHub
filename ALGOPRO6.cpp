#include <iostream>
int check(int n){
	if((n%4==0 &&n%100!=0) || n%400==0) return 1;
	return 0;
}
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0,x=n;
	int y=0;
	while(x>0){
		y+=x%10;
		x/=10;
	}
	if(check(n)) sum+=165+29*2+366*y;
	else sum+=154+28*2+365*y;
	sum+=30*21+4*168;
	sum+=7*172+31*28;
	cout<<sum<<endl;
	return 0;
}
