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

void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        cout << "---------------------------------" << endl;
        cout << "💠 Inserted " << v << " at Head 💠" << endl;
        cout << "---------------------------------" << endl;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "---------------------------------" << endl;
    cout << "💠 Inserted " << v << " at Tail 💠" << endl;
    cout << "---------------------------------" << endl;
}

void print_Linked_list(Node* head) {
    cout << "=================================" << endl;
    cout << "📜 Your Linked List: ";

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << "=================================" << endl;
}

void insert_at_position(Node*& head, int pos, int val) {
    Node* newNode = new Node(val);

    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        cout << "---------------------------------" << endl;
        cout << "💠 Inserted " << val << " at Position " << pos << " 💠" << endl;
        cout << "---------------------------------" << endl;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp == NULL) {
            cout << "❌ Position out of bounds ❌" << endl;
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "❌ Position out of bounds ❌" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    cout << "---------------------------------" << endl;
    cout << "💠 Inserted " << val << " at Position " << pos << " 💠" << endl;
    cout << "---------------------------------" << endl;
}

int main() {
    Node* head = NULL;
    while (true) {
        cout << "=================================" << endl;
        cout << "===== Choose an Option Below =====" << endl;
        cout << "1️⃣ Insert at Tail" << endl;
        cout << "2️⃣ Print the Linked List" << endl;
        cout << "3️⃣ Insert at Position" << endl;
        cout << "4️⃣ Terminate" << endl;
        cout << "=================================" << endl;
        int option;
        cin >> option;
        
        if (option == 1) {
            int v;
            cout << "Enter a Value: ";
            cin >> v;
            insert_at_tail(head, v);
        } 
        else if (option == 2) {
            print_Linked_list(head);
        } 
        else if (option == 3) {
            int pos, val;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> val;
            insert_at_position(head, pos, val);
        } 
        else if (option == 4) {
            cout << "👋 Exiting Program. Goodbye! 👋" << endl;
            break;
        } 
        else {
            cout << "❌ Invalid Option. Please choose again. ❌" << endl;
        }
    }

    return 0;
}
 