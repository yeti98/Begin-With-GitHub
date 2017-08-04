#include <iostream>
#include <string>
#include <vector>
using namespace std;
char chr(int a){
	return a+'0';
}
int val(char a){
	return a-'0';
}
char chradd(char a, char b, int& mem){
	int temp=val(a)+val(b)+mem;
	mem=temp/10;
	return chr(temp%10);
}
char chrod(char a, char b, int& mem){
	int temp=val(a)-mem-val(b);
}
string bnadd(string a, string b){
	string ans;
	while (a.length()<b.length()) a='0'+a;
	while (b.length()<a.length()) b='0'+b;
	int mem=0, n=a.length();
	while(n--) ans=chradd(a[n],b[n],mem)+ans;
	if(mem>0) ans='1'+ans;
	return ans;
}
string bnmul(string a, int n){
	string kq="0";
	while(n--) kq=bnadd(kq,a);
	return kq;
}
int check(string a){
	vector<int> freq(10,0);
	int i=0;
	while(i<a.length()) ++freq[val(a[i])],++i;
	i=2;
	while(i<=a.length()){
		string temp=bnmul(a,i);
		vector<int> freqtemp(10,0);
		int j=0;
		while(j<temp.length()) ++freqtemp[val(temp[j])],++j;
		for(int j=0;j<10;j++) if(freq[j]!=freqtemp[j]) return 0;
		i++;
	}
	return 1;
}
int main(){
	string a;
	while((cin>>a)!=NULL){
		cout<<a;
		if(check(a)) cout<<" is cyclic"<<endl; else cout<<" is not cyclic"<<endl;;
	}
}
