#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int x){
        val = x;
        next = NULL;
        prev = NULL;
    }
};
ListNode* removeDuplicates(ListNode* head){
    set<int> myset;
    ListNode* temp = head;
    while(temp!=NULL){
        myset.insert(temp->val);
        temp = temp->next;
    }
    ListNode* dummy = NULL;
    ListNode* back  = NULL;
    for(int i: myset){
        ListNode* temp = new ListNode(i);
        if(dummy==NULL){
            dummy = temp;
            back = temp;
        }
        else{
            back->next = temp;
            back = back->next;
        }
    }
    return dummy;
}
int main(){
   int n;
   cin>>n;
   ListNode* head = NULL;
   ListNode* back = NULL;
   for(int i=0;i<n;i++){
        int val;
        cin>>val;
        ListNode* temp = new ListNode(val);
        if(head==NULL){
            head = temp;
            back = temp;
        }
        else{
            back->next = temp;
            back = back->next;
        }
   }


    //printing list
    ListNode* final = removeDuplicates(head);
    while(final!=NULL){
        cout<<final->val<<" ";
        final = final->next;

    }
}
