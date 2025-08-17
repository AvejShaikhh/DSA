#include<iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1;

void push(){
    if(top==N-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        int val;
        cout<<"Enter Value : ";
        cin>>val;
        top++;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        int num = stack[top];
        top--;
        cout<<"Deleted "<<num<<endl;
    }
}
void peek(){
    if(top==-1){
        cout<<"No Peek"<<endl;
    }
    else{
        cout<<stack[top]<<endl;
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int ch;
    do{
        cout<<"Enter Your Choice : 1.Push(),2.Pop(),3.Peek(),4.Display(): ";
        cin>>ch;
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                cout<<"You have entered Wrong Input!"<<endl;
        }
    }while(ch!=0);
    return 0;
}
