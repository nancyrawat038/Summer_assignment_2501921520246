#include <iostream>
using namespace std;
int main()
{
    int n,a[100],x;
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>a[i];
    cin>>x;
    for(int i=0;i<n;i++)
    for(int j=i+1; j<n; j++)
    if (a[i]+a[j]==x)
    cout << a[i]<<""<<a[j];
}
        