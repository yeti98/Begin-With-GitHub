#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define FIP(i,a,b) for(int i=(a);i<(b);i++)
#define FIM(i,a,b) for(int i=(a);i<(b);i--)
#define FLP(i,a,b) for(long i=(a);i<(b);i++)
#define PB(x) push_back(x);
using namespace std;
int main() {
	int test;
	cin >> test;
	while (test--) {
		string str;
		cin >> str;
		vector<int> freq(26,0);
		FLP(i, 0, str.length()) ++freq[str[i] - 'a'];
		int count = 0;
		for (int i = 0; i < 26; i++) if (freq[i] % 2 != 0) ++count;
		if (count > 3) cout << "NO" << endl; else cout << "YES" << endl;
	}
	return 0;
}
