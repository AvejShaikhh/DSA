#include<bits/stdc++.h>
using namespace std;

//Find Square Root by using Binary Search
int findSqrt(int num){
    if(num == 0 || num == 1){
        return num;
    }
    int low = 1;
    int high = num;
    int mid = -1;
    while(low<=high){
        mid = low + (high-low)/2;
        long long square = static_cast<long long>(mid)*mid;
        if(square > num){
            high = mid-1;
        }
        else if(square == mid){
            return mid;
        }
        else{
            low = mid+1;
        }
    }
    return static_cast<int>(round(high));

}
int main(){

    int num;
    cin>>num;
    cout<<"Square Root of "<<num<<" is : "<<findSqrt(num);

    return 0;
}
