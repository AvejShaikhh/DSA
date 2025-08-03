#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {};
};
ListNode* findMIDDLE(ListNode* head){

    int count = 0;
    ListNode* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;

    }
    int num = count/2;
    temp = head;
    while(num--){
        temp = temp->next;
    }

    return temp;
}
int main(){
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    int n,value;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        ListNode* newNode = new ListNode(value);
         if (!head) {
            head = newNode;  // Initialize head
            tail = newNode;  // Keep track of the last node
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    head = findMIDDLE(head);
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    return 0;
}
