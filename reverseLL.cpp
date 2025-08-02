#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseList(ListNode *head)
{
    vector<int> ans;
    ListNode *temp = head;

    while (temp != NULL)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }
    int i = ans.size() - 1;
    temp = head;
    while (temp)
    {
        temp->val = ans[i];
        i--;
        temp = temp->next;
    }
    return head;
}

int main()
{
    int n, value;
    cin >> n;

    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    for (int i = 0; i < n; ++i)
    {
        cin >> value;
        ListNode *newNode = new ListNode(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    head = reverseList(head);
    // printing new List

    while (head)
    {
        cout << head->val;
        head = head->next;
    }

    return 0;
}
