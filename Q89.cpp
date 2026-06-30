#include <iostream>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);
    int c=1;
    for(int i=0; s[i]!='\0';i++)
    if(s[i]==' ')
    c++;
    cout<<c;
}