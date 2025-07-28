#include<bits/stdc++.h>

using namespace std;

void print(long n);

int main()
{
    long n;
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
        print(num);
        cout<<endl;
    }

    return 0;
}

void print(const long n)
{
    if(n==0) return ;
    print(n/10);
    cout<<n%10 <<" ";
}