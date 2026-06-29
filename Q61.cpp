#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1,x; i<n; i++)
    {
        cin>>x;
        sum=+x;
    }
    cout<<n*(n+1)/2-sum;
}