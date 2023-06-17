#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Iterative traversal
void print(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}

bool isLoop(Node *head)
{
    Node *dummy = new Node(0);
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next == NULL)
        {
            return false;
        }
        if (curr->next == dummy)
        {
            return true;
        }
        Node *next_node = curr->next;
        curr->next = dummy;
        curr = next_node;
    }
    return false;
}

bool isLoop2(Node *head)
{
    unordered_set<Node *> s;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        if (s.find(curr) != s.end())
        {
            return true;
        }
        s.insert(curr);
    }
    return false;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    third->next = second;
    if (isLoop2(head))
    {
        cout << "The cycle exists" << endl;
    }
    else
    {
        cout << "The cycle doesn't exists" << endl;
    }
    return 0;
}