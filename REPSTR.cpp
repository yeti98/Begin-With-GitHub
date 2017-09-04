#include <iostream>
#include <vector>
using namespace std;
string IntToString(long long Number){
	string temp="";
	while(Number>0){
		char s=(Number%10)+'0';
		Number/=10;
		temp=s+temp;
	}
	return temp;
}
string Solution(long long Number, string M){
	string SNumber=IntToString(Number);
	vector<int> freqM(10,0);
	for(int i=0;i<M.length();i++) ++freqM[M[i]-'0'];
	for(int i=0;i<SNumber.length();i++)
		for(int j=9;j>SNumber[i]-'0';j--)
			if(freqM[j]>0) {
				SNumber[i]=j+'0';
				freqM[j]--;
			}
	return SNumber;
}
int main(){
	long long Number;
	string M;
	cin>>Number; cin>>M;
	cout<<Solution(Number, M)<<endl;
	return 0;
}
