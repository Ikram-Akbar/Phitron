#include<bits/stdc++.h>
using namespace std;

vector<int>concatArray(vector<int>a,vector<int>b,vector<int>c)
{
  for(int val: b)
  {
    c.push_back(val);
  }
  for(int val: a)
  {
    c.push_back(val);
  }
  return c;

};

int main()
{
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  vector<int>b(n);
    for(int i=0; i<n; i++)
  {
    cin>>b[i];
  }
  vector<int>c;
  c = concatArray(a,b,c);
  for(int val:c)
  {
    cout<<val<<" ";
  }


  
  return 0;
}