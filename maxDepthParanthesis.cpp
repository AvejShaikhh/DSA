#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s){
    int res = 0;
    int curr = 0;
    for(char& c : s){
        if(c == '('){
            curr++;
            res = max(res, curr);
        }
        if(c == ')'){
            curr--;
        }
    }
    return res;
}

int main(){

    string s;
    cin>>s;

    cout<<maxDepth(s);
    return 0;
}
