#include<iostream>
using namespace std;

int compareStr(string a, string b){
    int LenA = a.size();
    int LenB = b.size();
    int i,j;
    
    for(i=0,j=0;a[i]!='\0'||b[j]!='\0';i++,j++){
        int valueA = int(a[i]);
        int valueB = int(b[j]);
        if(a[i]<b[j]){return -1;}
        if(a[i]>b[j]){return 1;}
        else{
            
            if(LenA==LenB){
                return 0;
            }
            if(a[i]=='\0'){
                return -1;
            }
            if(b[j]=='\0'){
                return 1;
            }
        }
    }
}
int main(){
    string a = "apple";
    string b = "apple";
    int res = compareStr(a,b);
    if(res==0){cout<<res<<" Same";}
    if(res==1){cout<<res<<" Oppo Of Dictionary Order";}
    if(res==-1){cout<<res<<" Dictionary Order";}

    return 0;
}
