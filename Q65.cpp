#include <iostream>
using namespace std;
int main()
{
    int n,m,a[100],b[100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0; i<m; i++)
        cin>>b[i];
        for(int i=0; i<n; i++)
        cout <<a[i]<<"";
        for(int i=0;i<m; i++)
        cout<<b[i]<<"";
    }

