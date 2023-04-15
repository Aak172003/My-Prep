#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n == 1 || n == 2) // for n=1, come from 0th stair     for n=2, come from either 1st or 0th stair
        return n;

    // come either from (n-1)th stair or from (n-2)th stair
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{

    // climb stairs
    int n;
    cin >> n;
    int ans = climbStairs(n);
    cout << ans << '\n';

    return 0;
}