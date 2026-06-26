#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        int n = i, rem, sum = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum = sum + rem * rem * rem;
            n = n / 10;
        }
        if (sum == i)
        cout << i <<"";
    }
    return 0;
}