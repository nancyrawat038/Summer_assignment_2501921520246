#include <iostream>
using namespace std;
int main()
{
    char s[100],ch;
    cin.getline(s,100);
    cin>>ch;
    int c=0;
    for(int i=0;s[i]!='\0';i++)
    if(s[i]==ch)
    c++;
    cout<<c;
}