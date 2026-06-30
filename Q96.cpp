#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size();i++)
    {
        bool f=false;
        for(int j=0; j<i; j++)
        if(s[i]==s[j])
        f=true;
        if(!f)
        cout<<s[i];
    }
}