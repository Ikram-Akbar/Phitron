#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>myArray;
    vector<int>myArray2(5);
    vector<int>myArray3(5,10);
    vector<int>myArray4(myArray3);

    int arr[6] = {1,2,3,4,5,6};
    vector<int>myArray5(arr,arr+6);

    //access the value : 
    for(int i=0; i< myArray5.size();i++)
    {
        cout<<myArray5[i]<<" ";
    }
    cout<<endl;
    cout<< "----- "<<endl;
    cout<<myArray.size()<<endl;
    cout<<myArray2.size()<<endl;
     
  return 0;
}