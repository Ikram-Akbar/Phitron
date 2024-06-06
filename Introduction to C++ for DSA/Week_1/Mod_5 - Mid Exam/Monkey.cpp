#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[100005];
    while(cin.getline(a, 100005))
    {
        sort(a, a + strlen(a));
        for(int i = 0; a[i]; i++) 
        {
            if(a[i] == ' ')
            {
                continue;       
            } 
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}  