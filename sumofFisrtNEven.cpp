#include<iostream>
using namespace std;
int sum =0;

int recursion(int n){
if(n>0){
    
    recursion(n-1);
    sum = sum + 2*n;
}
if(n==0){
    return sum;
}
    
}
int main(){
    int n;
    cin>>n;
    cout<<recursion(n);
    return 0;
}
