#include<bits/stdc++.h>
using namespace std;
void reversed_print(stringstream& booksStream)
{
    string single_word;
    if(booksStream >> single_word)
    {
        reversed_print(booksStream);
        cout<<single_word<<endl;
    }

};

int main()
{
    string books_name ;
    getline(cin,books_name);
    stringstream booksStream(books_name);
    reversed_print(booksStream);
    return 0;
}