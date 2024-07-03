#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>numbers(10,5); //initialize a List with (10 times ==> 5);

    //print every single items : using for loop ==> you should use iterator for access every element
    
    for(auto it= numbers.begin(); it != numbers.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}