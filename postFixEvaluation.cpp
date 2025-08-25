#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int eval(vector<string>& tokens){
    stack<string> st;
    for(string ch: tokens){
        if(ch=="+"||ch=="-"||ch=="*"||ch=="/"){
            string A = st.top();
            st.pop();
            int a = stoi(A);

            string B = st.top();
            st.pop();
            int b = stoi(B);

            if(ch=="+"){
                st.push(to_string(b+a));
            }
            else if(ch=="-"){
                st.push(to_string(b-a));
            }
            else if(ch=="*"){
                st.push(to_string(b*a));
            }
            else{
                st.push(to_string(b/a));
            }
        }
        else{
            st.push(ch);
        }
    }
    string A = st.top();
    st.pop();
    int a = stoi(A);

    return a;
}

int main(){
    vector<string> tokens = {"4","13","5","/","+"};
    cout<<eval(tokens);
    return 0;
}
