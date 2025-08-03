#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {};
};
ListNode* removeKthNode(ListNode* head, int k){

    int count = 1;
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr != NULL){
        if(count==k){
            ListNode* temp = curr;
            prev->next = curr->next;
            delete temp;
            count = 1;
            delete temp;

            curr = prev->next;
        }
        prev = curr;
        curr=curr->next;
        count++;
    }
    return head;
}
int main(){
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    int n,value;
    cout<<"Enter Size & List Elements : ";
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
    int k;
    cout<<endl<<"Enter K th Value To REMOVE : ";
    cin>>k;
    head = removeKthNode(head,k);
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    return 0;
}
