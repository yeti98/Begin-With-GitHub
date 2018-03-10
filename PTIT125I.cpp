#include <bits/stdc++.h>
using namespace std;
int main (){
	long N, k;
	cin>>N>>k;
	stack <int> s;
	for(long i=1; i<=N; i++){
		char ch;	cin>>ch;
		if (s.empty())	s.push(ch-'0');
		else{
			while (!s.empty() && s.top()< ch-'0' && k>0){
				s.pop(); --k;
			}
			s.push(ch-'0');
		}
	}
	while (k>0 && !s.empty()){
		s.pop(); --k;
	}
	vector <int> v;
	while(!s.empty()){
		int tmp=s.top();
		s.pop();
		v.push_back(tmp);
	}
	for(long i=v.size()-1;i>=0;i--)	cout<<v[i];
	return 0;
}
