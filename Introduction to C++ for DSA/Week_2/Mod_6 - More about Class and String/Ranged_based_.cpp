#include<bits/stdc++.h>
using namespace std;

int main()
{

    string speech ;
    cin >> speech;
    for(int i=0; i<speech.size(); i++)
    {
        cout<< speech[i]<<endl;
    }

    // another shortcut way : 

    for(char splitChar:speech)
    {
        cout<<splitChar<<" ";
    }

  return 0;
}