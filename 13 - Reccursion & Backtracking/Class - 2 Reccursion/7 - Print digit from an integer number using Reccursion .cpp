#include <iostream>
using namespace std;

// Print digit by using Modulo and Divisor method

void printDigits(int n)
{
    if (n == 0)
        return;
    // cout<<"n is : "<<n<<endl;
    printDigits(n / 10);

    // cout<<"n is : "<<n<<endl;

    int digit = abs(n % 10);
    cout << digit << ' ';
}

int main()
{
    // number to digits
    int n;
    cin >> n;
    if (n == 0)
        cout << 0 << '\n';
    else
        printDigits(n);
}