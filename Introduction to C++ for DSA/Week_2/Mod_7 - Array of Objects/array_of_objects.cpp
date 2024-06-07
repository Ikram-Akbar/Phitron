#include<bits/stdc++.h>
using namespace std;
class Students
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin>>n;
   
    Students a[n];
    for(int i=0; i<n; i++)
    {
        getchar();
        getline(cin,a[i].name);
        cin>>a[i].roll>> a[i].marks ;
    }

    for(int i=0; i<n; i++)
    {
       cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
  return 0;
}