#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* int n;
    cin>>n;
    getchar();
    vector<string> names(n);

    for(int i=0; i<n; i++)
    {
        getline(cin,names[i]);
    }
    for(string name: names)
    {
        cout<<name<<endl;
    } */

int a[4] = {12,13,14,15};
vector<int> v(a, a+4);
for(int val: v)
{
    cout<<val<<endl;
}
     
  return 0;
}