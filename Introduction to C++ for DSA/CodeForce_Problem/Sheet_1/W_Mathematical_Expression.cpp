#include <iostream>
#include <string>

using namespace std;

int main() {
  int A, B, C;
  char S, Q;

  cin >> A >> S >> B >> Q >> C;

  // Check for valid expression format
  if (Q != '=') {
    cout << "Invalid expression format" << endl;
    return 1;
  }

  int result;
  switch (S) {
    case '+':
      result = A + B;
      break;
    case '-':
      result = A - B;
      break;
    case '*':
      result = A * B;
      break;
    default:
      cout << "Invalid operator" << endl;
      return 1;
  }

  if (result == C) {
    cout << "Yes" << endl;
  } else {
    cout << result << endl;
  }

  return 0;
}
