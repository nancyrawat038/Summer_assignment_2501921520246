#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size())
    cout<<"No";
    else if((a+a).find(b)!=string::npos)
    cout<<"Yes";
    else cout<<"No";
}