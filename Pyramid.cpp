#include<bits/stdc++.h>

using namespace std;

void printPyramid(int h,int cH);

int main()
{
    int n;
    cin>>n;
    printPyramid(n,0);
    return 0;
}

void printPyramid(int h,int cH)
{
    if(h==0) return;

    printPyramid(h-1,cH+1);

    for(int i=cH;i>0;i--)
    {
        cout<<" ";
    }
    for(int i=2*h-1;i>0;i--)
    {
        cout<<"*";
    }
    cout<<endl;
}