#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,3,5,7,9},b[5]={2,4,6,8,10};
    int i=0,j=0;
    while(i<5&&j<5)
    {
        if(a[i]<b[j]) cout<<a[i++]<<"";
        else cout<<b[j++]<<"";
    }
    while (i<5)cout<<a[i++]<<"";
    while (j<5)cout<<b[j++]<<"";
}