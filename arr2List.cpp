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
int main(){
    vector<int> arr = {2,54,1,3,7};
    //putting into List

    int n = arr.size();
    ListNode* head = nullptr;
    ListNode* back = NULL;
    ListNode* temp = NULL;
    if(n==0){
        head = NULL;
    }
    else{
        if(n==1){
            head = new ListNode(arr[0]);
        }
        else{
            head = new ListNode(arr[0]);
            back = head;
            for(int i=1;i<n;i++){
            
                temp = new ListNode(arr[i]);
                back->next = temp;
                temp->prev = back;
                back = back->next;
            }
        }
    }


    //printing list
    ListNode* final = head;
    while(final!=NULL){
        cout<<final->val<<" ";
        final = final->next;

    }
}
