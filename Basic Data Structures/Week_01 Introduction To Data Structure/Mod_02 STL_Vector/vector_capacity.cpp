#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;
  //max-size: 
  cout<<"max size: "<< v.max_size()<<endl;

  cout << "empty element : " << v.capacity() << endl;
  v.push_back(10);
  cout << "Add 1st element : " << v.capacity() << endl;
  v.push_back(20);
  cout << "Add 2nd element : " << v.capacity() << endl;
  v.push_back(30);
  cout << "Add 3rd element : " << v.capacity() << endl;
  v.push_back(50);
  cout << "Add 4th element : " << v.capacity() << endl;
  v.push_back(40);
  cout << "Add 5th element : " << v.capacity() << endl;

  cout<< "element of the vector : ";//element of the vector : 10 20 30 50 40 

  //resize : 
  v.resize(2);//decrease--> 10 20 
  v.resize(8);// increase--> 10 20 0 0 0 0 0 0 
  v.resize(8,147);// increase-->  10 20 147 147 147 147 147 147 


  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}