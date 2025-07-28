#include<bits/stdc++.h>

using namespace std;

void print_event_indices(const int n,int arr[]);

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    print_event_indices(n-1,arr);
    return 0;
}

void print_event_indices(const int n,int arr[])
{
    if (n%2==0)
    {
        cout<<arr[n]<<" ";
    }
    if (n<0) return;
    print_event_indices(n-1,arr);
}
