#include <iostream>
using namespace std;
struct number{
	int sign;
	string num;
};
number getNumber(string s){
	number n;
	if(s[0]=='-'){
		n.sign=-1; n.num="";
		for(int i=1;i<s.length();i++) n.num+=s[i];
	}
	else{
		n.sign=1;	n.num=s;
	}
	return n;
}
number maxByte=getNumber("127"), minByte=getNumber("-128");
number maxShort=getNumber("32767"), minShort=getNumber("-32768");
number maxInt=getNumber("2147483647"), minInt=getNumber("-2147483648");
number maxLong=getNumber("9223372036854775807"), minLong=getNumber("-9223372036854775808");

bool strcmp(string a, string b){
	if(a.length()>b.length()) return true;
	if(a.length()<b.length()) return false;
	for(int i=0;i<a.length();i++){
		if(a[i]>b[i]) return true;
		if(a[i]<b[i]) return false;
	}
	return false;
}
bool numcmp(number a, number b){
	if(a.sign==1 && b.sign==-1) return  true;
	if(a.sign==-1 && b.sign==1) return false;
	if(a.sign==1 && b.sign==1){
		if(strcmp(a.num, b.num)) return true;
		return false;
	}
	if(a.sign==-1 && b.sign==-1){
		if(strcmp(a.num, b.num)) return false;
		return true;
	}
}
string solve(string s){
	if(s.length()>=21) return "BigInteger";
	number n=getNumber(s);
	if(numcmp(n, minByte) == 1 && numcmp(n, maxByte)== 0) return "byte";
	if(numcmp(n, minShort) == 1 && numcmp(n, maxShort) == 0) return "short";
	if(numcmp(n, minInt) == 1 && numcmp(n, maxInt)== 0) return "int";
	if(numcmp(n, minLong) == 1 && numcmp(n, maxLong)== 0) return "long";
	return "BigInteger";
}
int main(){
	string s; cin>>s;
	cout<<solve(s);
	return 0;
}
