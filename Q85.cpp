#include <iostream>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int i=0,j;
    while (s[i]!='\0')
    i++;
for(j =0; j<i/2; j++)
if (s[j]!=s[i-j-1])
{
    cout<<"Not Palindrome";
    return 0;
}
cout<<"Palindrome";
}