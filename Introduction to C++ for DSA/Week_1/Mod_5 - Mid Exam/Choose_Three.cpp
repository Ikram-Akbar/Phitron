#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    

    for (int t = 0; t < test_cases; ++t) {
        int n;
        cin >> n;
        int sum;
        cin >> sum;

        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

    

        int flag = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    if(arr[i] + arr[j] + arr[k] == sum) {
                        flag = 1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }

        if(flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
