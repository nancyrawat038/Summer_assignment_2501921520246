#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.size();i++)
    for(int j=0; j<b.size(); j++)
    if(a[i]==b[j])
    {
        cout<<a[i]<<"";
        break;
    }
}