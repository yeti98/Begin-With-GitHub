/* thực hiện các phép nhân số lớn rồi dùng 2 bảng tần số để so sánh xem số đã cho có phải số vòng hay không*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
char chr(int a){
	return a+'0'; //chuyển số sang ký số
}
int val(char a){
	return a-'0'; //chuyển ký số sang số
}
char chradd(char a, char b, int& mem){ //cộng hay số
	int temp=val(a)+val(b)+mem;
	mem=temp/10;
	return chr(temp%10);
}
string bnadd(string a, string b){  // cộng 2 số lớn
	string ans;
	while (a.length()<b.length()) a='0'+a;
	while (b.length()<a.length()) b='0'+b;
	int mem=0, n=a.length();
	while(n--) ans=chradd(a[n],b[n],mem)+ans;
	if(mem>0) ans='1'+ans;
	return ans;
}
string bnmul(string a, int n){     //nhân 2 số lớn
	string kq="0";
	while(n--) kq=bnadd(kq,a);
	return kq;
}
int check(string a){              //kiểm tra số vòng
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
	while(cin>>a){
		cout<<a;
		if(check(a)) cout<<" is cyclic"<<endl; else cout<<" is not cyclic"<<endl;;
	}
}
