#include<iostream>
using namespace std;
int main()
{
    char s1[100],s2[100];
    cin>>s1;
    int i;
    for(i=0;s1[i]!='\0';i++)
    s2[i]=s1[i];
    s2[i]='\0';
    cout<<s2;
}