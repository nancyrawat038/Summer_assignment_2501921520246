#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Capital of India?\n";
    cout<<"A.Delhi\nB.Mumbai\n";
    cin>>a;
    if(a=='A'||a=='a')
    cout<<"Correct";
    else
    cout<<"Wrong";
    return 0;
}