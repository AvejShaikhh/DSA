#include<bits/stdc++.h>
using namespace std;

int maxFreq(string s){
    int n = s.size();
    int maxnum = 1, count = 1;
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        maxnum = max(maxnum, count);
    }
    return maxnum;
}

int main(){
    string s="";
    // cin>>s;
    cout<<maxFreq(s);
    return 0;
}
