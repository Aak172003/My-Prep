
#include <iostream>
using namespace std;

void digitfind(int num)
{
    if (num == 0)
        return;
    /*

    int digit = num%10;
    cout<<digit<<" ";
    digitfind(num/10);

    Enter no:
    567
    7 6 5

    */

    // OR

    digitfind(num / 10);
    int digit = num % 10;
    cout << digit << " ";

    /*

    Enter no:
    657
    6 5 7
    */
}

int main()
{
    int n;
    cout << "Enter no:" << endl;
    cin >> n;
    digitfind(n);
    return 0;
}