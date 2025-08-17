#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    int data;
    node* next;
};
struct node* top =0;

void push(){
    int x;
    cout<<"Enter data :";
    cin>>x;
    struct node* NewNode;
    NewNode = (struct node*)malloc(sizeof(struct node));
    NewNode->data = x;
    NewNode->next = top;
    top = NewNode;
}
void pop(){
    if(top==0){
        cout<<"Nothing to POP"<<endl;
    }
    struct node* temp = top;
    top = top->next;
    cout<<"deleted "<<temp->data<<endl;
    free(temp);
}
void peek(){
    if(top==0){ cout<<"NULL"; }
    cout<<"Peek element is : "<<top->data<<endl;
}
void display(){
    struct node* temp = top;
    if(top==0){
        cout<<"Nothing to display"<<endl;
    }
    else{
        while(temp!=0){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
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
