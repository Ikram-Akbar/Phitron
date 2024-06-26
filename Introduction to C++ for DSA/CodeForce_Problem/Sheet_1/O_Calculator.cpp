#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    
    // Read the input in the format A S B
    cin >> A >> S >> B;
    
    // Perform the operation based on the operator S
    switch (S) {
        case '+':
            cout << A + B << endl;
            break;
        case '-':
            cout << A - B << endl;
            break;
        case '*':
            cout << A * B << endl;
            break;
        case '/':
            cout << A / B << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    
    return 0;
}
