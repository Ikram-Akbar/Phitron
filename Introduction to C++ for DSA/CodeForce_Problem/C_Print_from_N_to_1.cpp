#include<bits/stdc++.h>
using namespace std;

void print_it_reverse(int n)
{
    if(n==0)
    {
      return;
    }
    cout<<n;
    if (n > 1)
    {
        cout << " ";
    }
    print_it_reverse(n-1);
}
int main()
{
    int n;
    cin>>n;
    print_it_reverse(n); 
    return 0;
}