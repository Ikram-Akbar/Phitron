#include <iostream>
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
    if (head == NULL) {
        head = newNode;
        cout << "Inserted at Head" << endl;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "Inserted at Tail" << endl;
}

void print_linked_list(Node* head) {
    cout << "Your Linked List: ";
    if (head == NULL) {
        cout << "No Element" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_position(Node*& head, int pos, int val) {
    if (pos == 0) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        cout << "Inserted at Head" << endl;
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp == NULL) {
            cout << "Invalid Index" << endl;
            delete newNode;
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted at Position " << pos << endl;
}

void delete_node_by_position(Node*& head, int pos) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    if (pos == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        cout << "Deleted Head" << endl;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp->next == NULL) {
            cout << "Invalid Index" << endl;
            return;
        }
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    if (deleteNode == NULL) {
        cout << "Invalid Index" << endl;
        return;
    }
    temp->next = deleteNode->next;
    delete deleteNode;
    cout << "Deleted Position " << pos << endl;
}

int main() {
    Node* head = NULL;

    while (true) {
        cout << "\nChoose an Option:\n";
        cout << "1. Insert at Tail\n";
        cout << "2. Print the Linked List\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete a Node by Position\n";
        cout << "5. Terminate\n";
        cout << "Enter your choice: ";

        int option;
        cin >> option;

        if (option == 1) {
            int val;
            cout << "Enter a Value: ";
            cin >> val;
            insert_at_tail(head, val);
        } else if (option == 2) {
            print_linked_list(head);
        } else if (option == 3) {
            int pos, val;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> val;
            insert_at_position(head, pos, val);
        } else if (option == 4) {
            int pos;
            cout << "Enter Position: ";
            cin >> pos;
            delete_node_by_position(head, pos);
        } else if (option == 5) {
            break;
        } else {
            cout << "Invalid Option. Please try again." << endl;
        }
    }

    return 0;
}
