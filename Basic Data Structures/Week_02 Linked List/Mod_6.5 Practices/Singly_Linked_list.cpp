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

// Insert at Head 
void insert_at_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at Head" << endl;
}

// Insert at any position 
void insert_at_position(Node*& head, int pos, int val) {
    if (pos < 1) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (pos == 1) {
        insert_at_head(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of bounds!" << endl;
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Node Added Successfully at position " << pos << endl;
    }
}

// Insert at Tail 
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
        cout << "Tail Updated" << endl;
    }
}

// Print the Linked list 
void print_the_list(Node* head) {
    if (head == NULL) {
        cout << "Your List is Empty" << endl;
        return;
    }

    cout << "Your Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}

// Count the elements of Linked list 
int size_of_element(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        int option, val, pos;
        cout << "Option : 1 - Insert at Position" << endl;
        cout << "Option : 2 - Print the Linked List" << endl;
        cout << "Option : 3 - Count the Element of Linked List" << endl;
        cout << "Option : 4 - Insert at Tail" << endl;
        cout << "Option : 5 - Exit Program" << endl;
        cout << "==== Please Choose an Option ====" << endl;
        cin >> option;

        if (option == 1 || option == 4) {
            cout << "Enter value: ";
            cin >> val;
        }

        if (option == 1) {
            cout << "Enter Position: ";
            cin >> pos;
            insert_at_position(head, pos, val);
        } else if (option == 2) {
            print_the_list(head);
        } else if (option == 3) {
            int size = size_of_element(head);
            cout << "Size of Linked List: " << size << endl;
        } else if (option == 4) {
            insert_at_tail(head, tail, val);
        } else if (option == 5) {
            cout << "Exit the Program Successfully" << endl;
            break;
        } else {
            cout << "Invalid option, please choose again." << endl;
        }
    }

    return 0;
}
