#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int aa = a, bb=b,cc=c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<endl;
    cout<<aa<<endl<<bb<<endl<<cc<<endl; 
 
    return 0;
}