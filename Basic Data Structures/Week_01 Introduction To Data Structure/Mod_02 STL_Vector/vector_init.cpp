#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>myArray;
    vector<int>myArray1(5);
    //access the value : 
    for(int i=0; i< myArray1.size();i++)
    {
        cout<<myArray1[i]<<" ";
    }
    cout<<endl;
    cout<< "----- "<<endl;
    cout<<myArray.size()<<endl;
    cout<<myArray1.size()<<endl;
     
  return 0;
}