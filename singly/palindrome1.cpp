#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
    Node(char x)
    {
        data = x;
        next = NULL;
    }
};

bool isPalindrome(Node *head)
{
    stack<int> st;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        st.push(curr->data);
    }
    Node *h = head;
    while (!st.empty())
    {
        if (h->data != st.top())
        {
            return false;
        }
        st.pop();
        h = h->next;
    }
    return true;
}

int main()
{
    Node *head = new Node('g');
    head->next = new Node('f');
    head->next->next = new Node('g');
    if (isPalindrome(head))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
