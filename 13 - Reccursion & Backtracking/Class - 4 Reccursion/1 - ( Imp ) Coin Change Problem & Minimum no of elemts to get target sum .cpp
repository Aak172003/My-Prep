#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int> &arr, int target)
{
  // base case , if target hi nhi dia means hum 0 return krdenge
  if (target == 0)
  {
    return 0;
  }

  if (target < 0)
  {
    return INT_MAX;
  }

  // let's solve 1 case

  // jb hamare target < 0 jaata hai means there is
  //   no number of elemet to reach target sum
  int mini = INT_MAX;

  for (int i = 0; i < arr.size(); i++)
  {

    // cout << "value of i -> " << i << endl;
    // in this case our final answer totally dependent on ans

    //  Solve return minimum , no of eleements to get target sum
    //  ans is that value jo target me arr[index] ki value substract krke
    int ans = solve(arr, target - arr[i]);

    // cout << "ans value is " << ans << endl;
    // cout << "mini value befor: " << mini << endl;

    // check constion if or ans reach -ve value , 
    // then we dont update mini value

    if (ans != INT_MAX)
    {
      mini = min(mini, ans + 1);
    }

    // cout << "mini value is " << mini << endl;
  }

  return mini;
}

int main()
{
  vector<int> arr{1, 2};
  int target = 3;

  int ans = solve(arr, target);
  cout << "Answer is: " << ans << endl;
  return 0;
}

// OutPut

/*

// phle left left call until target not reach = 0 or -ve value
value of i -> 0
value of i -> 0
value of i -> 0

ans value is 0
mini value befor: 2147483647
mini value is 1

value of i -> 1
ans value is 2147483647
mini value befor: 1
mini value is 1
ans value is 1
mini value befor: 2147483647
mini value is 2
value of i -> 1
ans value is 0
mini value befor: 2
mini value is 1
ans value is 1
mini value befor: 2147483647
mini value is 2
value of i -> 1
value of i -> 0
ans value is 0
mini value befor: 2147483647
mini value is 1
value of i -> 1
ans value is 2147483647
mini value befor: 1
mini value is 1
ans value is 1
mini value befor: 2
mini value is 2



Answer is: 2

*/
