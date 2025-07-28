//https://codeforces.com/problemset/problem/2025/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    cin.ignore();


    while(n--)
    {
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        int i=0,count=0;
        while(s1[i]!='\0' && s2[i]!='\0' && s1[i]==s2[i])
        {
            count++;
            i++;
        }
        if (count==0) count= s1.length()+s2.length();
        else
        {
            int t1 = s1.length()-count;
            int t2 = s2.length()-count;
            count+= t1+t2;
            count++;
        }
        cout<<count<<endl;

    }
    return 0;
}
