//forward dec
class List;
class Node
{
    int data;
    Node *next;

public:
    Node(int d) : data(d), next(NULL){};
    friend class List;
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : head(NULL), tail(NULL) {}

    void push_front(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
};