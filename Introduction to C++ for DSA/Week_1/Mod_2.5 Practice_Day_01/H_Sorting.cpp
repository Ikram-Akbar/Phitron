#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin>>numbers[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<numbers[i]<<" ";
    }

    
}