// #include<bits/stdc++.h>
// using namespace std;
// void weird(int n);
//
// int main()
// {
//     int n;
//     cin>>n;
//     weird(n);
//     return 0;
// }
//
// void weird(int n)
// {
//     cout<<n;
//     if(n==1) return;
//     cout<<" ";
//     if (n%2==0) weird(n/2);
//     else weird((n*3)+1);
// }


#include<iostream>
using namespace std;

int main()
{
    long int n;
    cin>>n;

    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2==0)
        {
            n=n/2;
        }else
        {
            n=(3*n)+1;
        }
    }
    cout<<n<<"\n";
    return 0;
}
