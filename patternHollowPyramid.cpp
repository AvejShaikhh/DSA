#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Upper half
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n*2-1; j++){
            if(j==n-i || j==i+n-2 || i==n){
                cout << "*";
            }
          
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    
    return 0;
}
