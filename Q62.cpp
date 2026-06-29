#include <iostream>
using namespace std;
int main()
{
    int n,a[100], max=0, ans;
    cin>>n;
    for(int i=0; i<n; i++)
    cin >> a[i];
    for(int i=0; i<n;i++)
    {
        int c=0;
        for(int j=0; j<n; j++)
        if(a[i]==a[j]) c++;
        if (c>max)
        {
            max=c;
            ans=a[i];
        }
    }
    cout<<ans;
        }