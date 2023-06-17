#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next, *random;
    Node(int x)
    {
        data = x;
        next = random = NULL;
    }
};

void print(Node *start)
{
    Node *ptr = start;
    while (ptr)
    {
        cout << "Data = " << ptr->data << ", Random  = " << ptr->random->data << endl;
        ptr = ptr->next;
    }
}

Node *clone(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        Node *nxt = curr->next;
        Node *clone = new Node(curr->data);
        curr->next = clone;
        clone->next = nxt;
        curr = nxt;
    }
    for (Node *curr = head; curr != NULL; curr = curr->next->next)
    {
        curr->next->random = (curr->random != NULL) ? curr->random->next : NULL;
    }
    Node *h2 = head->next;
    Node *cloneh = h2;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->next = curr->next->next;
        cloneh->next = cloneh->next ? cloneh->next->next : NULL;
        cloneh = cloneh->next;
    }
    return h2;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = new Node(20);

    head->random = head->next->next;
    head->next->random = head->next->next->next;
    head->next->next->random = head;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head->next->next->next;

    cout << "Original list : \n";
    print(head);

    cout << "\nCloned list : \n";
    Node *cloned_list = clone(head);
    print(cloned_list);

    return 0;
}
