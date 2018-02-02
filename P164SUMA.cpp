#include <iostream>
using namespace std;
struct team{
	string name;
	int goal=0;
};
int main(){
	int n;
	string s[101];
	cin>>n;
	team x[2];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	x[0].name=x[1].name=s[0];
	int cnt=1;
	while(x[0].name==x[1].name && cnt<n) {
		x[1].name=s[cnt];
		cnt++;
	}
	for(int i=0;i<n;i++)
		if(s[i]==x[0].name) ++x[0].goal;
		else ++x[1].goal;
	if(x[0].goal>x[1].goal) cout<<x[0].name;
	else cout<<x[1].name;
	return 0;
}
