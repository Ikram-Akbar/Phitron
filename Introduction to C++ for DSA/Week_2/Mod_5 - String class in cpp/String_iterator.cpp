#include<bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;

   for (int i = 0; i < s.size(); i++) {
      cout << s[i] << endl;
   }

   // process : 1 --> 

   string::iterator it;
   for (it = s.begin(); it < s.end(); it++) {
      cout << * it << endl;
   }

   // process : 2 -->
   for (auto it = s.begin(); it < s.end(); it++) {
      cout << * it << endl;
   }

   return 0;
}