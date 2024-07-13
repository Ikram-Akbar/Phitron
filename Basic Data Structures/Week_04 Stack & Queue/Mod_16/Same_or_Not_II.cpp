#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

    
    void push(int val) {
        Node *newNode = new Node(val);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        count++;
    }

    void pop() {
        if (!tail) {
            cout << "Stack underflow\n";
            return;
        }
        Node *temp = tail;
        if (tail->prev) {
            tail = tail->prev;
            tail->next = NULL;
        } else {
            head = tail = NULL;
        }
        delete temp;
        count--;
    }

    int top() {
        if (!tail) {
            cout << "Stack is empty\n";
            return -1;
        }
        return tail->data;
    }

    int size() {
        return count;
    }

    bool is_empty() {
        return count == 0;
    }
};

class myQueue {
public:
   Node *head = NULL;
    Node *tail = NULL;
    int count = 0;
   
    void push_q(int val) {
        Node *newNode = new Node(val);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        count++;
    }

    void pop_q() {
        if (!head) {
            cout << "Queue underflow\n";
            return;
        }
        Node *temp = head;
        if (head->next) {
            head = head->next;
            head->prev = NULL;
        } else {
            head = tail = NULL;
        }
        delete temp;
        count--;
    }

    int front() {
        if (!head) {
            cout << "Queue is empty\n";
            return -1;
        }
        return head->data;
    }

    int size() {
        return count;
    }

    bool is_empty() {
        return count == 0;
    }
};

int main() {
    myStack st;
    myQueue q;

    int n, m;
    cin >> n>> m;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++) {
        int ele;
        cin >> ele;
        q.push_q(ele);
    }

    if (st.size() != q.size()) {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;
    while (!st.is_empty()) {
        int val = st.top();
        st.pop();
        int ele = q.front();
        q.pop_q();
        if (val != ele) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
