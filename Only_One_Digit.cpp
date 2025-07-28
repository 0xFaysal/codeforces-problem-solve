#include <bits/stdc++.h>
using namespace std;

int main() {
int n,x;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    int smallest=INT_MAX;
    while(x>0){
        int temp=x%10;
        if(temp<smallest){
            smallest=temp;
        }
        x=x/10;
    }
    cout<<smallest<<endl;
}

return 0;
}