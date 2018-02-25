#include <bits/stdc++.h>
using namespace std;
int N;
int arr[1001];
void insertionSort(){
    int value, i, j;
    for(i=1;i<N;i++){
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }
    for(j=0;j<N;j++) cout<<arr[j]<<" ";
}
int main(void) {
    cin>>N;
    for(int i = 0; i < N; i++) cin>>arr[i];
    insertionSort();
    return 0;
}

