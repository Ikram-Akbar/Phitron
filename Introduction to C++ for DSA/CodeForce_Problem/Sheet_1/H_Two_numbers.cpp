#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // Cast to double for floating-point division
    double div_result = static_cast<double>(a) / b;

    int floor_num = floor(div_result);
    int ceil_num = ceil(div_result);
    int round_num = round(div_result);

    cout << "floor " << a << " / " << b << " = " << floor_num << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil_num << endl;
    cout << "round " << a << " / " << b << " = " << round_num << endl;

    return 0;
}
