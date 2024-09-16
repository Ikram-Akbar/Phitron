#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    while (true)
    {
        cout << "Enter the command" << endl;
        cout << "0 : Insert a new value" << endl;
        cout << "1 : Remove the top value" << endl;
        cout << "2 : Show the top value" << endl;
        cout << "3 : Exit the Programme" << endl;
        int c;
        cin >> c;

        if (c == 0)
        {
            cout << "Enter an int value" << endl;
            int x;
            cin >> x;
            pq.push(x);
            cout << "Push Done" << endl;
        }
        else if (c == 1)
        {
            if (!pq.empty())
            {
                pq.pop();
                cout << "The top value removed" << endl;
            }
            else
            {
                cout << "Priority queue is empty, cannot remove" << endl;
            }
        }
        else if (c == 2)
        {
            if (!pq.empty())
            {
                cout << "The top value is: " << pq.top() << endl;
            }
            else
            {
                cout << "Priority queue is empty" << endl;
            }
        }
        else if (c == 3)
        {
            cout << "The programme successfully exited" << endl;
            break;
        }
        else
        {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    return 0;
}
