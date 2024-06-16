#include<bits/stdc++.h>
using namespace std;

vector<int>cmpTriplets(vector<int>a,vector<int>b)
{
    int alice_pt = 0;
    int bob_pt = 0;

    for(int i=0; i<3;i++)
    {
        if(a[i]>b[i])
        {
            alice_pt+=1;
        }
        else if(a[i]<b[i])
        {
            bob_pt+=1;
        }
    }
    return {alice_pt,bob_pt};
}

int main()
{
    vector<int>a(3);
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }

    vector<int>b(3);
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }
    vector<int>result = cmpTriplets(a,b);
    cout<<result[0]<<" "<<result[1]<<endl;


  return 0;
}