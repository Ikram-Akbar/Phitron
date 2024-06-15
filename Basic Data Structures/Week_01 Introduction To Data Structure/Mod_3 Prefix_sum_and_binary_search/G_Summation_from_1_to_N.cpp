#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long sum = (long long)n * (n + 1) / 2;
cout<<sum<<endl;
  return 0;
}


/* 
 Probably, the solution is executed with error 'signed integer overflow' on the line 8
 */