#include<bits/stdc++.h>
using namespace std;

int main()
{
    string my_string;
    getline(cin,my_string);

    //stringstream: 
    stringstream myss (my_string);

    string word;
    int count = 0;
    while (myss >> word)
    {
        cout<<word<<endl;
        count++;
    }
    cout<<count<<endl;
    
     
  return 0;
}