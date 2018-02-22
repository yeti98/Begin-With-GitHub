#include <bits/stdc++.h>
using namespace std;
vector<long> weightOfUniformSubstring;
long caculateWeightOfString(char ch, long count){
	long weight=(ch-'a'+1)*count;
	return weight;
}
void generateUniformSubstring(string s){
	for(long i=0;i<s.length();i++){
		long j=i, count=1;
		while(s[j]==s[j+1]) ++j, ++count;
		weightOfUniformSubstring.push_back(caculateWeightOfString(s[i], count));
	}
}
long binarySearch(long x){
	long l=0, h=weightOfUniformSubstring.size(), mid=(l+h)/2;
	while(l<=h){
		if(x==weightOfUniformSubstring[mid]) return mid;
		if(x<weightOfUniformSubstring[mid])	h=mid-1;
		else l=mid+1;
		mid=(l+h)/2;
	}
	return -1;
}
int main(){
	string s;
	cin>>s;
	generateUniformSubstring(s);
	sort(weightOfUniformSubstring.begin(), weightOfUniformSubstring.end());
	long test; cin>>test;
	while(test--){
		long val; cin>>val;
		if(binarySearch(val)==-1) cout<<"No\n"; else cout<<"Yes\n";
	}
	return 0;
}
