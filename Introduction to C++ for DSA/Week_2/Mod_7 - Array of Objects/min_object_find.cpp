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
    Students a [n];

    //getting input from user : 
    for(int i=0; i<n; i++)
    {
        getchar();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }

    Students minn;
    for(int i=0; i<n; i++)
    {
        if(a[i].marks < minn.marks)
        {
            minn = a[i];
        }
    }
cout << minn.name<<" "<<minn.roll<<" "<<minn.marks <<endl;
/*     int minn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(a[i].marks < minn)
        {
            minn = a[i].marks;
        }
    }
    cout << minn <<endl; */
     
  return 0;
}