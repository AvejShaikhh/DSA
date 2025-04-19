#include<iostream>
#include<cmath>
using namespace std;
int Intpow(int num,int power){
    int result =1;
    while(power--){
        result = result * num;
    }
    return result;
}

int totalString(int n){
    int even, prime;
 
    if(n % 2 == 0){
        even = n / 2;
        prime = n / 2;
    } else {
        even = n / 2 + 1;
        prime = n / 2;
    }

    int evenMul = Intpow(5, even);
    int primeMul = Intpow(4, prime);

    return evenMul * primeMul;
}

int main(){
    int n = 4;
    cout << "Total combinations: " << totalString(n) << endl;
    return 0;
}
