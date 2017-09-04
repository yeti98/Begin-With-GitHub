#include <iostream>
using namespace std;
int n;
int x[16];
void tao(int i) {
	for (int j = 0; j < 2; j++) {
		x[i] = j;
		if (i == n-1) {
			cout<<x[0];
			for(int i=1;i<n;i++){
				if(x[i-1]==1) cout<<not(x[i]);
				else cout<<x[i];
			}
			cout<<endl;
		}
		else tao(i + 1);
	}
}
int main() {
	cin>>n;
	tao(0);
	return 0;
}
