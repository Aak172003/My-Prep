
/*   
Codestudio Link  -   https://www.codingninjas.com/codestudio/problems/swap-alternate_624941?leftPanelTab=1
*/       



#include <iostream>
using namespace std;

void printarray(int arr[],int size)    // function ko Initialse krte time hum parameter pass krte time usme data type jaroor denge 
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
      cout<<endl;
}
void swapAlternate(int arr[],int size)    // function ko Initialse krte time hum parameter pass krte time usme data type jaroor denge 

{
    for(int i=0;i<size;i=i+2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
  int even[8] = {5,9,8,5,4,5,6,1};
  swapAlternate(even,8);
  printarray(even,8);

  
  int odd[9] = {1,2,3,4,5,6,7,8,9};
  swapAlternate(odd,9);
  printarray(odd,9);

    return 0;
}
