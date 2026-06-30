#include <iostream>
using namespace std;
int main()
{
    int bal=5000,w;
    cin>>w;
    if(w<=bal)
    {
        bal-=w;
        cout<<"Balance ="<< bal;
    }
    else 
    cout<<"Insufficient Balance";
    return 0;
}