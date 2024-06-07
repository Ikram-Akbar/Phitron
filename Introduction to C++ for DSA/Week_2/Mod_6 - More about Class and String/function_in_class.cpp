#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string address;

    Person( string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;

        /*name = nm;
        age = ag;
        address = add;
         */
    }

    void Person_Details()
    {
        cout<<name<<" "<<age<<" "<<address<<endl;
    }
};

int main()
{
    Person ikram("ikram",255,"cumilla");
    ikram.Person_Details();
    
  return 0;
}