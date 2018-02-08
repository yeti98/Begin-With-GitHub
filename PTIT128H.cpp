#include <iostream>
#include <vector>
using namespace std;
struct dinh{
	int x,y;
};
char s[10][10];
int dR[]={1,1,1,4,4,4,7,7,7};
int dC[]={1,4,7,1,4,7,1,4,7};
//kiem tra bang so co phai sudoku hay khong
bool isSudoku(){
	//kiem tra theo tung hang
	for(int i=1;i<=9;i++){
		int d[10]={0};
		for(int j=1;j<=9;j++) ++d[s[i][j]-'0'];
		for(int j=1;j<=9;j++) if(d[j]==0) return false;
	}
	//kiem tra theo tung cot
	for(int j=1;j<=9;j++){
		int d[10]={0};
		for(int i=1;i<=9;i++) d[s[i][j]-'0']++;
		for(int i=1;i<=9;i++) if(d[i]==0) return false;
	}
	//kiem tra tung o vuong 3x3
	for(int k=0;k<=8;k++){
		int d[10]={0};
		for(int i=dR[k]; i<=dR[k]+2;i++)
			for(int j=dC[k]; j<=dC[k]+2;j++)
				d[s[i][j]-'0']++;
		for(int i=1;i<=9; i++) if( d[i] == 0 ) return false;
	}
	return true;
}
void Process(){
	vector<dinh>v;
	//nhap va xu ly cac vi tri la so 0
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cin>>s[i][j];
			if(s[i][j]=='0'){
				dinh tmp;
				tmp.x=i;
				tmp.y=j;
				v.push_back(tmp);
			}
		}
	}
	//thu tung vi tri
	int ok=0;
	for(char i1='1';i1<='9';i1++)
		for(char i2='1';i2<='9';i2++)
			for(char i3='1';i3<='9';i3++)
				for(char i4='1';i4<='9';i4++)
					for(char i5='1';i5<='9';i5++){
						s[v[0].x][v[0].y]=i1;
						s[v[1].x][v[1].y]=i2;
						s[v[2].x][v[2].y]=i3;
						s[v[3].x][v[3].y]=i4;
						s[v[4].x][v[4].y]=i5;
						if(isSudoku()){
							ok =1;
							for(int i=1;i<=9;i++){
								for(int j=1;j<=9;j++)	cout<<s[i][j];
								cout<<'\n';
							}
							return;
						}
					}
	if(ok==0) cout<<"Could not complete this grid."<<endl;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		Process();
		cout<<endl;
	}
 
}
