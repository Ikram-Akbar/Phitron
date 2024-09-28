#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 0, 1, 1, 1, 0, 1, 1}; // উদাহরণ এরে
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
            }
            count = 0;
        }
    }

    // যদি শেষের অংশে ১ থাকে
    if (count > maxCount) {
        maxCount = count;
    }

    cout << "সর্বাধিক পরপর ১ এর সংখ্যা: " << maxCount << endl;

    return 0;
}
