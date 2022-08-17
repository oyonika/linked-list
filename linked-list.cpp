#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void print(Node* a) {
    while (a) {
        cout<<a->data<<endl;
        a = a->next;
    }
}

void set_node(Node* a, int value, Node* b = NULL) {
    a->data = value;
    a->next = b;
}

int main() {
    Node* start = NULL;
    Node* a = NULL;
    Node* b = NULL;
    Node* c = NULL;

    start = new Node();
    a = new Node();
    b = new Node();
    c = new Node();

    set_node(start, 10, a);
    set_node(a, 20, b);
    set_node(b, 30, c);
    set_node(c, 40);

    print(start);

    return 0;
}