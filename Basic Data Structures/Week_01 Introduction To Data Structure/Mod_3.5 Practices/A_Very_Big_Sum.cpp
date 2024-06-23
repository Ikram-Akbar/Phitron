#include <bits/stdc++.h>
using namespace std;

long long aVeryBigSum(vector<long long> num) {
    long long sum = 0;
    for(int val: num) {
        sum += val;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long long> num(n); 
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    } 
    long long result = aVeryBigSum(num); 
    cout << result << endl;
    return 0;
}
