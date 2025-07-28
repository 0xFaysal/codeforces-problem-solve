//
// Created by faysal on 7/28/2025.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,save=0;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a, a + n, greater<int>());

        for(int i=0;i<n;i++)
        {
            if((a[i]*pow(2,save)<=c))
            {
                save++;
            }
        }
        cout<<n-save<<endl;

    }
    return 0;
}
