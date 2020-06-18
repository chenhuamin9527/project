#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node(int num);
    void append(Node &n);
    void show();
    Node *next;
    int data;
    static Node * head;
};

Node::Node(int num)
{
    data = num;
    next = NULL;
}

void Node::show()
{
    cout << data << "->" << next->data << endl;
    cout << &next->data << endl;
}

void Node::append(Node &n)
{
    next = &n;
}

int main()
{
    Node a(1);
    Node::head = &a;
    Node b(2);
    a.append(b);
    cout << b.data << endl;
    cout << a.next->data << endl;
    cout << b.next << endl;
    cout << b.data << endl;
    a.show();
    return 0;
}