#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int a_likes = 0, a_dislikes = 0, b_likes = 0, b_dislikes = 0, a_neutral = 0, b_neutral = 0;
        
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) a_likes++;
            if (a[i] == -1) a_dislikes++;
            if (a[i] == 0) a_neutral++;
            if (b[i] == 1) b_likes++;
            if (b[i] == -1) b_dislikes++;
            if (b[i] == 0) b_neutral++;
        }

        int max_min_rating = -n;

        for (int i = 0; i <= n; ++i) {
            int a_rating = a_likes - a_dislikes + min(a_neutral, i - (a_likes - a_dislikes)) - max(0, i - (a_likes + b_dislikes));
            int b_rating = b_likes - b_dislikes + min(b_neutral, (n - i) - (b_likes - b_dislikes)) - max(0, (n - i) - (b_likes + a_dislikes));

            max_min_rating = max(max_min_rating, min(a_rating, b_rating));
        }

        cout << max_min_rating << endl;
    }
    return 0;
}
