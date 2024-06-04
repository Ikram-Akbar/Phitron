#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
    int id;
    int gpa;
    char name[101];
};

int main()
{
  Student st_1, st_2;
  cin.getline(st_1.name,100);
  cin >> st_1.id >> st_1.gpa;

  getchar();
  cin.getline(st_2.name,100);
  cin >> st_2.id >> st_2.gpa;
  
  cout << st_1.name << " " << st_1.id << " " << st_1.gpa<<endl;
  cout << st_2.name << " " << st_2.id << " " << st_2.gpa<<endl;
     
  return 0;
}