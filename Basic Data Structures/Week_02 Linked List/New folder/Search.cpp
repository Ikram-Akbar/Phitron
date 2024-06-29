#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int searchElement(Node* head, int target_index) {
    int index = 0;
    while (head != NULL) {
        if (head->val == target_index) {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while (true) {
            cin >> val;
            if (val == -1) break;
            insert_at_tail(head, tail, val);
        }

        int target_index;
        cin >> target_index;

        int result = searchElement(head, target_index);
        cout << result << endl;

    }

    return 0;
}
