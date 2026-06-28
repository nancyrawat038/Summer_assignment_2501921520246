#include <iostream>
using namespace std;
void fib(int n)
{
    int a=0, b=1, c;
    while(n--)
    {
        cout << a << "";
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cin >> n;
    fib(n);
}
