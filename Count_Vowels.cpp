#include<bits/stdc++.h>

using namespace std;

int countVowels(string str,int i);


int main()
{
    string str;
    getline(cin,str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout<<countVowels(str,0)<<endl;
    return 0;
}

int countVowels(string str,int i)
{
    if(str[i]=='\0') return 0;
    int result =0;
    if (str[i]=='a'|| str[i]=='e' || str[i]=='i'||str[i]=='o'||str[i]=='u') result =1;
    return  countVowels(str,i+1)+result;
}

