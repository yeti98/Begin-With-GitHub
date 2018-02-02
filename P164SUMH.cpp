#include <iostream>
using namespace std;
int main(){
	long n;
	long long sum=1;
	int height=0;
	cin>>n;
	do{
		height++;
		sum+=height;
		n-=sum;
	}while(n>=sum);
	cout<<height;
	return 0;
}
