#include <iostream>
using namespace std;
int pal (int n)
{
    int rev = 0, t = n;
    while (n)
    {
        rev = rev * 10+n%10;
        n/=10;
    }
    return rev == t;
}
int main()
{
    int n;
    cin >> n;
    if (pal(n))
    cout << "Palindrome";
    else
    cout << "Not Palinndrome";
}