#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string t, string s){
    if(t.size() != s.size()){
        return false;
    }
    unordered_map<char, char> mapST, mapTS;

    for(int i=0;i<s.size();i++){
        char c1 = s[i];
        char c2 = t[i];
        if(mapST.count(c1)){
            if(mapST[c1]!=c2) return false;
        }
        else{
            mapST[c1] = c2;
        }

          if(mapTS.count(c2)){
            if(mapTS[c2]!=c1) return false;
        }
        else{
            mapTS[c2] = c1;
        }
    }
    return true;
}

int main(){
    string s, t;
    cin>>s>>t;
    cout<<isomorphic(s,t);
    return 0;
}
