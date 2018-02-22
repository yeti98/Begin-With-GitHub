#include <bits/stdc++.h>
using namespace std;
bool Check(int N, int S){
	if (S>9*N||S==0) return false;
	return true;
}
void PrintMax(int N, int S){
	int count = 0;
	while(count!=N){
		if (S >= 9){
			cout<<"9";
			S-=9;
		}else{
			cout<<S;
			S=0;
		}
		count++;
	}
}
void PrintMin(int N, int S){
	int ans[105] = {0};
	int i = N;
	while (S!=0){
		if (S >= 9){
			ans[i] = 9;
			S = S - 9;
		} else {
			ans[i] = S;
			S = 0;
		}
		--i;
	}
	if (ans[1] == 0){
		ans[1] = 1;
		for(int j=2;j<=N;j++){
			if (ans[j]>0){
				ans[j]--;
				break;
			}
		}
	}
	for (int i=1;i<=N;i++)	cout<<ans[i];
}
int main(){
	int N = 0;
	int S = 0;
	cin >>N>>S;
	if (N == 1 && S == 0) cout << "0 0";
	else{
		if (!Check(N, S)) cout << "-1 -1";
		else{
			PrintMin(N, S);
			cout<<" ";
			PrintMax(N, S);
		}
	}
	return 0;
}
