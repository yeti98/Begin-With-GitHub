#include <iostream>
#include <vector>
using namespace std;
int main(){
	char arr[110][110]={'#'};
	int R, C;
	cin>>R>>C;
	for(int i=1;i<=R;i++){
		string s; cin>>s;
		for(int j=0;j<s.length();j++) {
			arr[i][j+1]=s[j];
			arr[i][2*C-j]=s[j];	
		}
	}
	int A, B; cin>>A>>B;
	for(int i=R+1;i<=2*R;i++){
		for(int j=1;j<=2*C;j++) {
			arr[i][j]=arr[2*R+1-i][j];	
		}
	}
	if(arr[A][B]=='#') arr[A][B]='.'; else arr[A][B]='#';
	for(int i=1;i<=2*R;i++){
		for(int j=1;j<=2*C;j++) cout<<arr[i][j];
		cout<<"\n";
	}
	return 0;
}
