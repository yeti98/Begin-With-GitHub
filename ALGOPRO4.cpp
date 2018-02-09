#include <iostream>
using namespace std;
int main(){
	string s; cin>>s;
	while(s.length()%3!=0) s='0'+s;
	string kq;
	string str[8]={"000","001","010","011","100","101","110","111"};
	for(int i=0;i<=s.length()-3;i+=3){
		string tmp;
		for(int j=0;j<3;j++) tmp+=s[j+i];
		for(int j=0;j<8;j++){
			if(tmp==str[j]) kq+=char(j+'0');
		}
	}
	cout<<kq;
	return 0;
}
