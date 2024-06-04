#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    int add = x+y;
    int sub = x-y;
    long long int mul = x*y;
    cout<< x << " + " << y << " = " <<add<<endl
    << x << " * " << y << " = " <<mul<<endl
    << x << " - " << y << " = " <<sub<<endl;
}