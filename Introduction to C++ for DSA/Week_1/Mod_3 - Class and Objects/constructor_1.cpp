#include<bits/stdc++.h>
using namespace std;

class Books
{
public:
    char name[101];
    int page;
    int price;
    int quantity;
    double rating;
    Books( char name[],int page, int price, int quantity, double rating)
    {
        strcpy(this->name,name);
        this->page = page;
        this->price = price;
        this->quantity = quantity;
        this->rating = rating;

    }

};
int main()
{
     char name[100] = " secret ";
     Books SecretOfZionism(name,320,300,125,8.8);

    //  Books* SecretOfZionism1 =  new Books(" a", 12, 2,11,2.2); //Heap memory 
    //  delete SecretOfZionism1;

     cout<<"Page: "<< SecretOfZionism.page <<endl <<"Price: "<< SecretOfZionism.price<<endl<<"Quantity: "<<SecretOfZionism.quantity<<endl<<"Rating: "<<SecretOfZionism.rating<<endl;
  return 0;
}