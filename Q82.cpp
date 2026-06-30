#include <iostream>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    i++;
    for(i=i-1;i>=0;i--)
    cout<<s[i];
    return 0;
}
