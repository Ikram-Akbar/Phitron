#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int> mat[node];
    while(edge--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    for(int i=0; i<mat[0].size(); i++)
    {
        cout<<mat[0][i]<<" ";
    }
    return 0;
}