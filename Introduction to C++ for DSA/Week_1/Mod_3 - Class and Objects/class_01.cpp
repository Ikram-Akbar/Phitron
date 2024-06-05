#include<bits/stdc++.h>

using namespace std;
//create Object : 
class Batsman {
  // access modifier: 
  public: char country[100];
  char name[100];
  int run;
  double strick_rate;
};

int main() {
  Batsman cricketer_1;

  cin.getline(cricketer_1.name, 99);
  getchar();
  cin.getline(cricketer_1.country, 99);
  getchar();
  cin >> cricketer_1.run >> cricketer_1.strick_rate;

  cout << "Name : " << cricketer_1.name << endl << "Country : " << cricketer_1.country << endl << "Run : " << cricketer_1.run << endl << "Strick Rate : " << cricketer_1.strick_rate << endl;

  return 0;
}