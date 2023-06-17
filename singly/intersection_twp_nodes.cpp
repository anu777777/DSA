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

int getCount(Node *head)
{
    Node *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

int _intersection(int d, Node *h1, Node *h2)
{
    Node *p1 = h1;
    for (int i = 0; i < d; i++)
    {
        if (p1 == NULL)
        {
            return -1;
        }
        p1 = p1->next;
    }
    Node *p2 = h2;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1 == p2)
        {
            return p1->data;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    return -1;
}

int getIntersection(Node *head1, Node *head2)
{
    int c1 = getCount(head1);
    int c2 = getCount(head2);
    int d;
    if (c1 > c2)
    {
        int d = c1 - c2;
        return _intersection(d, head1, head2);
    }
    else
    {
        int d = c2 - c1;
        return _intersection(d, head2, head1);
    }
}

int main()
{
    /*
        Creation of two linked lists

        1st 3->6->9->15->30
        2nd 10->15->30

        15 is the intersection point
    */

    Node *newNode;

    Node *head1 = new Node(10);

    Node *head2 = new Node(3);

    newNode = new Node(6);
    head2->next = newNode;

    newNode = new Node(9);
    head2->next->next = newNode;

    newNode = new Node(15);
    head1->next = newNode;
    head2->next->next->next = newNode;

    newNode = new Node(30);
    head1->next->next = newNode;

    head1->next->next->next = NULL;

    cout << getIntersection(head1, head2);
}