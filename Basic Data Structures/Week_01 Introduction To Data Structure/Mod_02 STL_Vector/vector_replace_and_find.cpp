#include<bits/stdc++.h>
using namespace std;

int main()
{
    //replace : 
    /* 
    * Structure :
    * vector<dataType>arrayName = { 10,20,24,25,12,11,14,12,11,32,31,30,11};
    * replace(arrName.begin(), arrName.end(),Old_value, New_value);
    *
    */

    vector<int>numbers ={ 10,20,24,25,12,11,14,12,11,32,31,30,11};
    replace(numbers.begin(),numbers.end(),11,2000);

    for(int x:numbers)
    {
        cout<<x<<" ";
    }


    /* 
    * Find Method 
    * Structure :
    * vector<dataType>arrayName = { 10,20,24,25,12,11,14,12,11,32,31,30,11};
    * find(arrName.begin(), arrName.end(),checking_Value);
    * It will return true or False
    * Make sure: it will return a Iterator only 
    *
    */

  auto it = find(numbers.begin(),numbers.end(),30);
  if(it != numbers.end()) cout<<" Found";
  else cout<<"Not Found"<<endl;
  return 0;
}