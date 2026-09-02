#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Stack {
    Node* topNode;
    int count;
public:
    Stack() {
        topNode = NULL;
        count = 0;
    }
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
        count++;
    }
    void pop() {
        if (topNode == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        count--;
    }
    int top() {
        return (topNode == NULL) ? -1 : topNode->data;
    }
    bool empty() {
        return topNode == NULL;
    }
    int size() {
        return count;
    }
    void display() {
        if (topNode == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = topNode;
        cout << "Stack: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};
int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    st.pop();
    st.display();
    return 0;
}