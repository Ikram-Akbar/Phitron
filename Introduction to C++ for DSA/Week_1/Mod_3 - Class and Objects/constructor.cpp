#include<bits/stdc++.h>
using namespace std;
class Users
{
public:
    
    int age;
    double height;
    bool isPopular;

    // Constructor
    Users( int age, double height, bool isPopular)
    {
        this->age = age;
        this->height = height;
        this->isPopular = isPopular;
    }
};

int main()
{
    Users ikram( 25,5.9,true);
    cout<<ikram.age<<" "<<ikram.height<<" "<<ikram.isPopular<<endl;
     
  return 0;
}