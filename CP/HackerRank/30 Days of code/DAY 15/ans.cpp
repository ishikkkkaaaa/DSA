#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
public:
    Node *insert(Node *head, int data)
    {
        //Complete this method
        Node *temp = new Node(data);
        if (head == NULL)
        {
            temp->data = data;
            temp->next = NULL;
            return temp;
        }
        else
        {
            Node *h = head;
            while (h->next)
            {
                h = h->next;
            }
            h->next = temp;
            return head;
        }
    }

    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};
int main()
{
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}