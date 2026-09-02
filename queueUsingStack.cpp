#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int n;
    int front;
    int rear;
public:
    Queue(int size)
    {
        n = size;
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    void enqueue(int x)
    {
        if (rear == n - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
        }
        cout << "Enqueued " << x << "\n";
    }
    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue Underflow\n";
            return;
        }
        else if (front == rear)
        {
            cout << "Removed: " << arr[front] << endl;
            front = rear = -1;
        }
        else
        {
            cout << "Removed: " << arr[front] << endl;
            front++;
        }
    }
    void peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front: " << arr[front] << "\n";
    }
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
};
int main()
{
    int size;
    cin >> size;
    Queue q(size);
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.dequeue();
        q.peek();
        q.display();
       return 0;
}
