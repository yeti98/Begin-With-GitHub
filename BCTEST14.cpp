#include <iostream>
using namespace std;
int main(){
	long A, B, V;
	cin>>A>>B>>V;
	if((V-B)%(A-B)) cout<<(V-B)/(A-B)+1;
	else cout<<(V-B)/(A-B);
	return 0;
}
