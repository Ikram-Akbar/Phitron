#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    
    int *numbers = new int[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>numbers[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<numbers[i]<<endl;
    }
}