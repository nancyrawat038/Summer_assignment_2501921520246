#include <iostream>
using namespace std;
int arm(int n)
{
    int sum=0, t=n, r;
    while(n)
    {
    r = n % 10;
    sum += r*r*r;
    n/=10;
}
return sum==t;
}
int main()
{
    int n;
    cin >> n;
    if (arm(n))
    cout << "Armstrong";
    else
    cout << "Not Armstrong";
}
