#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    node* next;
    node(int x) : val(x), next(NULL) {}
};

bool isPalindrome(node* head) {
    vector<int> vals;

    // Step 1: Copy list values into vector
    node* temp = head;
    while (temp) {
        vals.push_back(temp->val);
        temp = temp->next;
    }

    // Step 2: Compare vector from both ends
    int i = 0, j = vals.size() - 1;
    while (i < j) {
        if (vals[i] != vals[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    node* head = nullptr;
    node* tail = nullptr;
    int n, value;

    cout << "Enter Size & List Elements : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        node* newNode = new node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    if (isPalindrome(head))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
