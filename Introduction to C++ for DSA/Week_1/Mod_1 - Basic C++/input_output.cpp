#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //Ternary Operator :
    (n > 0) ? cout << "the number"<< " " << n : cout << "write a valid positive number" << endl;


    // Normal if-else :
    if (n != 0)
    {
        cout << " you have :" << n << endl;
    }
    else
    {
        cout<< " write a valid number .";
    }

    return 0;
}