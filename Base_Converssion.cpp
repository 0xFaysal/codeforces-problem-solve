#include<bits/stdc++.h>

using namespace std;

void conversion(int n);

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int num;
        cin>>num;
        if (num==0)
        {
            cout<<0<<endl;
            continue;
        }
        conversion(num);
        cout<<endl;
    }
    return 0;
}

void conversion(int n)
{
    if (n==0) return;
    conversion(n/2);
    cout<<n%2;
}