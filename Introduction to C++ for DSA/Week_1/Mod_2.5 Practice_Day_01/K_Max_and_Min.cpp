#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int mn = min({x,y,z});
    int mxx = max({x,y,z});
    cout<<mn<<" "<<mxx<<endl;
}