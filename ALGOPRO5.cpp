#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long c[56];
	for (int i=1; i <= 55; i++) c[i] = pow(2, i);
	int n;
	cin >> n;
	long long ans = 0;
	for(int i=1;i<=n;i++) ans += c[i];
	cout << ans << endl;
}
