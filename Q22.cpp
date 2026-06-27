#include <iostream>
using namespace std;
int main()
{
    int n, dec = 0, base = 1;
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        dec = dec + rem * base;
        base = base * 2;
        n = n / 10;
    }
    cout << dec;
    return 0;
}
