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

    Books(const char* name, int page, int price, int quantity, double rating)
    {
        strncpy(this->name, name, 100);
        this->name[100] = '\0'; // Ensuring null-termination of the string
        this->page = page;
        this->price = price;
        this->quantity = quantity;
        this->rating = rating;
    }

    void display() const
    {
        cout << "Name: " << name << endl
             << "Page: " << page << endl
             << "Price: " << price << endl
             << "Quantity: " << quantity << endl
             << "Rating: " << rating << endl;
    }
};

int main()
{
    Books SecretOfZionism("Secret of Zionism", 320, 300, 125, 8.8);
    SecretOfZionism.display();
    return 0;
}
