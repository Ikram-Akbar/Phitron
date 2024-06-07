#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence ;
    getline(cin, sentence);
    getchar();

    stringstream singleWord(sentence);
    string word;
    while (singleWord>>word)
    {
        cout<<word<<endl;
    }
     
  return 0;
}