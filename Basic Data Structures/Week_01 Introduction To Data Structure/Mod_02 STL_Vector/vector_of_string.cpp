#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>names;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        names.push_back(s);
    }

    for(string name : names)
    {
        cout<<name<<endl;
    }
  return 0;
}