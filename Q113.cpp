#include <iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cin>>a>>b>>ch;
    if(ch==1)cout<<a+b;
    else if(ch==2)cout<<a-b;
    else if(ch==3)cout<<a*b;
    else if(ch==4)cout<<a/b;
    else cout<<"Invalid";
    return 0;
}