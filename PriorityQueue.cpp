#include <iostream>
using namespace std;
class PriorityQueue
{
    int pq[100];
    int n;
public:
    PriorityQueue()
    {
        n = 0;
    }
    void insert(int x)
    {
        pq[n] = x;
        n++;
    }
    void deleteElement()
    {
        if (n == 0)
        {
            cout << "Queue is Empty\n";
            return;
        }
        int pos = 0;
        for (int i = 1; i < n; i++)
        {
            if (pq[i] > pq[pos])
                pos = i;
        }
        cout << "Deleted: " << pq[pos] << endl;
        for (int i = pos; i < n - 1; i++)
        {
            pq[i] = pq[i + 1];
        }
        n--;
    }
    void display()
    {
        if (n == 0)
        {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = 0; i < n; i++)
        {
            cout << pq[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    cout << "This program is written by Akshat Vats 2503201000145 CSE 11" << endl;

    PriorityQueue q;
    q.insert(10);
    q.insert(30);
    q.insert(20);
    q.insert(50);

    q.display();

    q.deleteElement();
    q.display();

    q.deleteElement();
    q.display();

    return 0;
}

/*
Output:
This program is written by Akshat Vats 2503201000145 CSE 11
Queue: 10 30 20 50
Deleted: 50
Queue: 10 30 20
Deleted: 30
Queue: 10 20
*/