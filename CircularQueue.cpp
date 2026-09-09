#include <iostream>
using namespace std;
class CircularQueue {
private:
    int *arr;
    int cap;
    int f, r;
    int currSize;
public:
    CircularQueue(int size) {
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f = 0;
        r = -1;
    }
    bool empty() {
        return currSize == 0;
    }
    bool full() {
        return currSize == cap;
    }
    void push(int data) {
        if (full()) {
            cout << "CQ is FULL\n";
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        currSize++;
    }

    void pop() {
        if (empty()) {
            cout << "CQ is EMPTY\n";
            return;
        }
        f = (f + 1) % cap;
        currSize--;
    }

    void display() {
        if (empty()) {
            cout << "CQ is EMPTY\n";
            return;
        }

        for (int i = 0; i < currSize; i++) {
            int index = (f + i) % cap;
            cout << arr[index] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.pop();
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();

    return 0;
}
