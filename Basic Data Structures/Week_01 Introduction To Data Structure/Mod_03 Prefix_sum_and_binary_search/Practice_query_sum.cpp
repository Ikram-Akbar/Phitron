#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int q;
    cin >> q;
    while (q--) {
        int target_num;
        cin >> target_num;

        int left = 0;
        int right = n - 1;
        bool flag = false;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target_num) {
                flag = true;
                break;
            } else if (arr[mid] < target_num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (flag == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
