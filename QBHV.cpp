#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	vector<string> v;
	long res=0;
	do{
		v.push_back(s); ++res;
	} while(next_permutation(s.begin(), s.end()));
	cout<<res<<'\n';
	for(int i=0;i<v.size();i++) cout<<v[i]<<'\n';
	return 0;
}
