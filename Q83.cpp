#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int v=0, c=0;
    cin>>s;
    for(int i=0; s[i]!='\0';i++)
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    v++;
    else c++;
    cout<<"Vowels="<<v<<endl;
    cout<<"Consonants="<<c;
    return 0;
}