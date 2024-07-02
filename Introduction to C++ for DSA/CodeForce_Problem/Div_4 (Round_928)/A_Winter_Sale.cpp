#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double X, P;
    cin >> X >> P;
    
    double original_price = P / (1 - X / 100);
    
    cout << fixed << setprecision(2) << original_price << endl;
    
    return 0;
}
