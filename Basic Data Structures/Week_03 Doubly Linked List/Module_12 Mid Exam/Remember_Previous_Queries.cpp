#include <bits/stdc++.h>
using namespace std;

void printList(list<int> &myList) {
    cout << "L -> ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "R -> ";
    auto it = myList.end();
    if (!myList.empty()) {
        do {
            --it;
            cout << *it << " ";
        } while (it != myList.begin());
    }
    cout << endl;
}

void deleteAtIndex(list<int> &myList, int index) {
    if (index < 0 || index >= myList.size()) {
        return; 
    }

    auto it = myList.begin();
    for (int i = 0; i < index; ++i) {
        ++it;
    }
    myList.erase(it);
}

int main() {
    int Q;
    cin >> Q;
    list<int> myList;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
          
            myList.push_front(V);
        } else if (X == 1) {
            
            myList.push_back(V);
        } else if (X == 2) {
          
            deleteAtIndex(myList, V);
        }
       
        printList(myList);
    }

    return 0;
}
