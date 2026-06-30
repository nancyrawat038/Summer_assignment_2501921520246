#include<iostream>
using namespace std;
int main()
{
    int n=7,g;
    cout<< "Guess Number:";
    cin>>g;
    if(g==n)
    cout <<"Correct!";
    else cout<<"Wrong! Number was"<<n;
    return 0;
}
