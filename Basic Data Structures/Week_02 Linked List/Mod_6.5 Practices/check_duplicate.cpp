#include<bits/stdc++.h>
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

void insert_at_tail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

bool check_duplicates_in_list(Node* head) {
    int frequency[101] = {0};
    Node* tmp = head;
    while(tmp != NULL) {
        frequency[tmp->val]++;
        if(frequency[tmp->val] > 1) {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int val;
    while(true) {
        cout << "Enter value (-1 to end): ";
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    
    if(check_duplicates_in_list(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}
