#include<iostream>
using namespace std;

int strPattern(string str, string p){
    int i,j,k;
    for(i=0;i<str.size()-p.size();i++){
        for(j=i,k=0;p[k];j++,k++){
            if(str[j]!=p[k]){
                break;
            }
        }
        if(k==p.size()){
        return i;
        }
    }
    return -1;

}
int main(){
    string str = "abaabbaababaabaaab";
    string p = "aaa";

    cout<<strPattern(str,p);

    return 0;
}
