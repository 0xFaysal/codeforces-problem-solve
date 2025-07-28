#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,maxHikes=0,flag=0,m=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if (m==1)
            {
                m=0;
                continue;
            }
            if (a[i]==0) flag++;
            else
            {
                flag=0;
            }
            if (flag==k){ maxHikes++; m=1; flag=0;}
        }
        cout<<maxHikes<<endl;
    }
    return 0;
}
