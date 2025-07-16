#include<iostream>
#include<algorithm>
using namespace std;

void rotateArray(int arr[],int n, int k){
    int rotated[n];
    for(int i=0;i<n;i++){
        int new_index = (i+k)%n;
        rotated[new_index] = arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<rotated[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,6,8,7};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,n,k);
    return 0;
}
