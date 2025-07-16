#include<iostream>
#include<algorithm>
using namespace std;

void rotateArray(int arr[],int n, int k){
    k = k % n;             // if initial arr = 1 2 3 4 5
    reverse(arr, arr+n);   // 5 4 3 2 1
    reverse(arr, arr + k); // 4 5 3 2 1
    reverse(arr + k, arr + n); // 4 5 1 2 3

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {24,5,6,1,1,5,6,3416,36};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,n,k);
    return 0;
}
