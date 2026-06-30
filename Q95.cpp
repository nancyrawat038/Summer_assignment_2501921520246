#include<iostream>
using namespace std;
int main()
{
    string s,w="",m="";
    getline(cin,s);
    s+=' ';
    for(int i=0;i<s.size();i++)
    { 
         char x=s[i];
    
if(x!=' ')
w+=x;
else{
    if(w.size()>m.size())
    m=w;
    w="";
}
    }
    cout<<m;
}