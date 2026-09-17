#include <iostream>
using namespace std;
class Deque {
private:
    int *arr;
    int cap;
    int f, r;
    int currSize;
public:
    Deque(int size) {
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
    void push_front(int data) {
        if (full()) {
            cout << "Deque is FULL\n";
            return;
        }
        if (currSize == 0) {
            f = r = 0;
            arr[f] = data;
        } else {
            f = (f - 1 + cap) % cap;
            arr[f] = data;
        }
        currSize++;
    }
    void push_back(int data) {
        if (full()) {
            cout << "Deque is FULL\n";
            return;
        }
        if (currSize == 0) {
            f = r = 0;
            arr[r] = data;
        } else {
            r = (r + 1) % cap;
            arr[r] = data;
        }
        currSize++;
    }
    void pop_front() {
        if (empty()) {
            cout << "Deque is EMPTY\n";
            return;
        }
        if (currSize == 1) {
            f = 0;
            r = -1;
        } else {
            f = (f + 1) % cap;
        }
        currSize--;
    }
    void pop_back() {
        if (empty()) {
            cout << "Deque is EMPTY\n";
            return;
        }
        if (currSize == 1) {
            f = 0;
            r = -1;
        } else {
            r = (r - 1 + cap) % cap;
        }
        currSize--;
    }
    void display() {
        if (empty()) {
            cout << "Deque is EMPTY\n";
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
    cout << "This program is written by Akshat Vats 2503201000145 CSE 11" << endl;

    Deque d(5);

    d.push_back(10);
    d.push_back(20);
    d.push_front(5);
    d.push_back(30);
    d.display();
    d.pop_front();
    d.pop_back();
    d.display();

    return 0;
}

/*
Output:
This program is written by Akshat Vats 2503201000145 CSE 11
5 10 20 30
10 20
*/
