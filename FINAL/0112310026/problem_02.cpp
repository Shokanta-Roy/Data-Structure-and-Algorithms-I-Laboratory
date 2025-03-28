#include <bits/stdc++.h>

using namespace std;

void reverseFirstKElements(queue<int> &q, int k)
{
    if (q.empty() || k > q.size() || k <= 0)
    {
        return;
    }

    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    int size = q.size();
    for (int i = 0; i < size - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
}

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    cout << "Original Queue: ";
    printQueue(q);

    reverseFirstKElements(q, k);

    cout << "Modified Queue: ";
    printQueue(q);

    return 0;
}
