#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; // number of queries
    cin >> q;
    
    queue<string> ticketQueue;

    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;
        
        if (type == 0) {
            string name;
            cin >> name;
            ticketQueue.push(name);
        } else if (type == 1) {
            if (ticketQueue.empty()) {
                cout << "invalid" << endl;
            } else {
                cout << ticketQueue.front() << endl;
                ticketQueue.pop();
            }
        }
    }

    return 0;
}
