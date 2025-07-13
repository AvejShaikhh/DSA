#include<iostream>
using namespace std;

double ans=1;
void firstN(int x,int y){
    if(y>0){
        ans = ans*x;
        firstN(x,y-1);
    }
    if(y<0){
        ans = ans/x;
        firstN(x,y+1);
    }
}

int main(){
    double x,y;
    cin >> x>>y;
    firstN(x,y);
    cout << ans;
}
