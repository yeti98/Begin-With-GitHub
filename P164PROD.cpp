#include <iostream>
#include <cmath>
using namespace std;
long long coso10(string s){
	long long res=0;
	long long i=s.length()-1, cnt=0;
	while(i>-1){
		res+=(s[i]-'0')*pow(3,cnt);
		++cnt; --i;
	}
	return res;
}
string coso3(long long i){
	string s="";
	while(i>0){
		s=(char(i%3+'0'))+s;
		i/=3;
	}
	return s;
}
void solve(string a, string b){
	string res="";
	while(a.length()<b.length()) a='0'+a;
	while(b.length()<a.length()) b='0'+b;
	for(int i=0;i<a.length();i++){
		int tmpa=a[i]-'0', tmpb=b[i]-'0';
		for(int j=0;j<=2;j++)
			if((tmpa+j)%3==tmpb) res+=(j+'0');
	}
	cout<<coso10(res);
}
int main ()
{
  long long a,b;
  cin>>a>>b;
  solve(coso3(a), coso3(b));
  return 0;
}
