#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int x)
    {
        val = x;
        next = NULL;
        prev = NULL;
    }
};
ListNode *createDLL(vector<int> &arr, int size, int index, ListNode *back)
{
    if(index==size){
        return NULL;
    }
    ListNode* temp = new ListNode(arr[index]);
    temp->next = createDLL(arr,size,index+1,temp);

    return temp;
}
int main()
{
    vector<int> arr = {2, 54, 1, 3, 7, 7, 9};
    int size = arr.size();
    int index = 0;
    ListNode *back = NULL;

    // printing list
    ListNode *final = createDLL(arr, size, index, back);
    while (final != NULL)
    {
        cout << final->val << " ";
        final = final->next;
    }
}
