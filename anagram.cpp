#include<bits/stdc++.h>
using namespace std;

bool anagram(string num1, string num2){
    unordered_map<char, int>m1;
    unordered_map<char, int>m2;

    for(int i=0;i<num1.size();i++){
        m1[i]++;
    }
     for(int i=0;i<num2.size();i++){
        m2[i]++;
    }
    return m1==m2;
}

int main(){
    string num1,num2;
    cin>>num1>>num2;
    cout<<anagram(num1,num2);
    return 0;
}
