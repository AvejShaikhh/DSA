#include<iostream>
using namespace std;

bool alphanumeric(string str){
    bool first,second = false;
    for(int i=0;i<str.size();i++){
        int asc = int(str[i]);
        if(asc>='a'&&asc<='z' || asc>='A'&&asc<='Z'){
            first = true;
        }
        if(asc>='0'&&asc<='9'){
            second = true;
        }
    }
    if(first&&second){return true;}
    else{return false;}
    

}

int main(){
    string str = "8764231jtd";
    if(alphanumeric(str)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    // alphanumeric(str);
    return 0;
}
