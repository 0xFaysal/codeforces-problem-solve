#include<bits/stdc++.h>

using namespace std;

void print(int n);
int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}

void print(int n)
{
    cout<<n;
    if(n==1) return;
    cout<<" ";
    print(n-1);
}
