#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    // insert data :
    mp["cadre"] = 255;
    mp["psychological crisis"] = 198;
    mp["World Politics"] = 500;

    // to see the key_value pair :
    for(auto it= mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<" ";
    }
    return 0;
}