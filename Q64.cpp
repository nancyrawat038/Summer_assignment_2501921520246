#include <iostream>
using namespace std;
int main()
{
    int n,a[100];
    cin>>n;
    for(int i=0; i<n;i++)
    cin>>a[i];
    for(int i=0; i<n; i++)
{
    int j;
    for(j=0; j<i; j++)
    if(a[i]==a[j])
    break;
    if(i==j)
    cout<<a[i]<<"";
}
}
