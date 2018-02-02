/********************************
*   Detail:	PTIT12A - nht3008 - 22.01.2018
*   Links:	http://www.spoj.com/PTIT/problems/PTIT123A/
********************************/
#include <bits/stdc++.h>
using namespace std;
#define FTI(idx, begin, end, cnt) for(int idx=(begin); idx<(end); idx+=cnt)
#define FTL(idx, begin, end, cnt) for(long idx=(begin); idx<(end); idx+=cnt)
#define FDI(idx, begin, end, cnt) for(int idx=(begin); i>=(end); idx-=cnt)
#define FDL(idx, begin, end, cnt) for(long idx=(begin); i>=(end); idx-=cnt)
#define PB(x) push_back(x);
#define EL cout<<"\n";
using namespace std;
int cmp(string a, string b){
	while(a.length()<b.length()) a='0'+a;
	while(b.length()<a.length()) b='0'+b;
	if(a>b) return 0;
	return 1;
}
int main(){
	while (1){
		vector<string> text;
		vector<string> number;
		vector<long> idx;
		string temp;
		do{
			cin>>temp;
			if(temp==".") return 0;
			if('a'<= temp[0] && temp[0]<='z'){
				text.PB(temp); 
				idx.PB(0);
			} else {
				number.PB(temp);
				idx.PB(1);	
			}
		} while(temp[temp.length()-1]!='.');
		sort(text.begin(), text.end());
		sort(number.begin(), number.end(), cmp);
		int idx_text=0, idx_number=0;
		FTL(i, 0, idx.size()-1, 1){
			if(idx[i]==0){
				cout<<text[idx_text].erase(text[idx_text].length()-1)<<", "; idx_text++;
			} else{
				cout<<number[idx_number].erase(number[idx_number].length()-1)<<", "; idx_number++;
			}
		}
		if(idx[idx.size()-1]==0) cout<<text[idx_text].erase(text[idx_text].length()-1)<<".";
		else cout<<number[idx_number].erase(number[idx_number].length()-1)<<".";
		EL
	}
	return 0;
}

