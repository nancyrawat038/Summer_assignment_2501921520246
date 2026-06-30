#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);
    int a=0,d=0,sp=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||
        (s[i]>='a'&&s[i]<='z'))
        a++;
        else if(s[i]>='0'&&s[i]<='9')
        d++;
        else
        sp++;
    }
    cout<<"Alphabets="<<a<<endl;
    cout<<"Digits="<<d<<endl;
    cout<<"Special="<<sp;
}