#include <iostream>
#include <vector>
using namespace std;
int main(){
	string phone_number;
	cin>>phone_number;
	vector<int> freq(26,0);
	for(int i=0;i<phone_number.length();i++) ++freq[phone_number[i]-'A'];
	long time=0;
	for(int i=0;i<freq.size();i++){
		int x;
		switch(i){
			case 0:
			case 1:
			case 2:	x=3; break;
			case 3:
			case 4:
			case 5: x=4; break;
			case 6:
			case 7: 
			case 8: x=5; break;
			case 9:
			case 10:
			case 11: x=6; break;
			case 12:
			case 13:
			case 14: x=7; break;
			case 15:
			case 16:
			case 17:
			case 18: x=8; break;
			case 19:
			case 20:
			case 21: x=9; break;
			default: x=10; break;
		}
		time+=x*freq[i];
	}
	cout<<time;
	return 0;
}
