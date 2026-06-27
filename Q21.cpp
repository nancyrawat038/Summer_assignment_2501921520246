 #include <iostream>
 using namespace std;
 int main()
 {
    int n, bin = 0, place = 1;
    cin >> n;
    while(n > 0)
    {
        int rem = n % 2;
        bin = bin + rem * place;
        place = place * 10;
         n = n / 2;
    }
    cout << bin;
    return 0;
}