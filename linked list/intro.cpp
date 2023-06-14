#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtTail(Node *&head, int key)
{
    Node *n = new Node(key);
    if (head == NULL)
    {
        head = n;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void DeleteNode(Node *&head, int key)
{
    if (head->data == key)
    {
        head = head->next;
        return;
    }
    Node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    Node *n = temp->next;
    temp->next = temp->next->next;
    delete n;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL" << endl;
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}
int length(Node *head)
{
    int ans = 0;
    while (head != NULL)
    {
        head = head->next;
        ans++;
    }
    return ans;
}
bool check(Node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}
int main()
{
    Node *head = new Node(1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    // DeleteNode(head, 1);
    // DeleteNode(head, 6);
    cout << length(head) << endl;
    cout << check(head, 9) << endl;
    display(head);

    return 0;
}