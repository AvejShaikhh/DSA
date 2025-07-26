#include<iostream>
using namespace std;

int findLength(string str){
    int i;
    for(i=0;str[i];i++){}
    return i;
}

int cntVowels(string str){
    int len = findLength(str);
    int cnt = 0;
    for(int i=0;i<len;i++){
        if(str[i]=='a'||str[i]=='A'||
            str[i]=='e'||str[i]=='E'||
            str[i]=='i'||str[i]=='I'||
            str[i]=='o'||str[i]=='O'||
            str[i]=='u'||str[i]=='U'){
                cnt++;
            }
    }
    return cnt;
}
int main(){
    string str = "Newton Invented Apple";
    cout<<cntVowels(str);

    return 0;
}
