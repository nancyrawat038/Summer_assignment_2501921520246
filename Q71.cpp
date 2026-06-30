#include <iostream>
using namespace std;
int main()
{
    int n, a[20],x;
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>a[i];
    cin>>x;
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
        {
            cout<<"Found";
            return 0;
        }
        if(a[m]<x)
        l=m+1;
        else
         r=m-1;
    }
    cout<<"Not Found";
    return 0;
}
