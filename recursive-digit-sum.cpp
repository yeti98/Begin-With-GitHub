//#include <bits/stdc++.h>
//using namespace std;
//
//int digit_sum_finder(string s){
//	int rem=0;
//	for(int i=0;i<s.length();++i){
//		rem = (rem + (s[i]-'0'))%9;
//	}
//	return rem%9;
//}
//int main(){
//	string s;
//	cin>>s;
//	int k;
//	cin>>k;
//	k=k%9;
//	if(k == 0){
//		cout<<"9";
//		return 0;
//	}
//	else{
//		int digit_sum = digit_sum_finder(s);
//		digit_sum = (digit_sum*k)%9;
//		if(digit_sum != 0){
//			cout<<digit_sum;
//		}
//		else{
//			cout<<"9";
//		}
//	}
//}
// native way
//#include <bits/stdc++.h>
//using namespace std;
//long long cal(string s){
//	long long sum=0;
//	for(int i=0;i<s.length();++i){
//		sum=(char (s[i]-'0'))+sum;
//	}
//	return sum;
//}
//string ToString(long long x){
//	ostringstream ostt;
//	ostt<<x;
//	return ostt.str();
//}
//int main(){
//	string s,tmp;
//	int n;
//	cin>>s>>n;
//	long long ans=cal(s);
//	ans=ans*n;
//	while(ans>=10) {
//		s=ToString(ans);
//		ans=cal(s);
//	}
//	cout<<ans; 
//	return 0;
//}
		//recursion
