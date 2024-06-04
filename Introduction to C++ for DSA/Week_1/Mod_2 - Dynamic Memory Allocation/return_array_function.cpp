#include<bits/stdc++.h>
using namespace std;

int *fun()
{
    int *numbers = new int[5];
    // Collect -  input / array element from user end : 
    for(int i=0; i<5; i++)
    {
        cin>>numbers[i];
    }
    return numbers;
}
int main()
{
    //print the numbers array : 
    int *my_Array = fun();
    for(int i=0; i<5; i++)
    {
        cout<<my_Array[i]<< " ";
    }
    // cout<< my_Array<<endl;
    return 0;

}