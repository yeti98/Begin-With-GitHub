#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test ;
    cin>>test ;
  	while(test--) {
		int stt; 
		string so;
		cin>>stt>>so;
        int i = so.size() -2 ;
        while (so[i] >= so[i+1]) i--;
        if(i==-1) {
            cout<<stt<<" BIGGEST\n";
        }
        else {
        	next_permutation(so.begin(), so.end());
        	cout<<stt<<" "<<so<<"\n";
        }
    }
    return 0;
}
