// Time : 0.02
//#include <iostream>
//using namespace std;
//string s;
//string addChar(string a, char b){
//	int carry=0;
//	int tmp=a[a.length()-1]-'0'+b-'0';
//	if(tmp>=10)	carry=1;
//	a[a.length()-1]=tmp%10+'0';
//	for(int i=a.length()-2;i>=0;i--){
//		tmp=a[i]-'0'+carry;
//		if(tmp>=10)	carry=1;	else carry=0;
//		a[i]=tmp%10+'0';
//	}
//	if(carry==1) a='1'+a;
//	return a;
//}
//int main(){
//	cin>>s;
//	long long d=0;
//	while(s.length()>1){
//		string t="0";
//		for(int i=0;i<s.length();i++) t=addChar(t,s[i]);
//		s=t;
//		++d;
//	}
//	cout<<d<<'\n';
//	return 0;
//}
//
//
// Time 0.00
#include <iostream>
using namespace std;
string caculateSum(string s){
	string res;
	long x=0;
	for(int i=0;i<s.length();i++) x+=s[i]-'0';
	while(x) {
		res+=(x%10)+'0';
		x/=10;
	}
	return res;
}
int main(){
	int cnt=0;
	string s; cin>>s;
	while(s.length()>1){
		++cnt;
		s=caculateSum(s);
	}
	cout<<cnt;
	return 0;
}
