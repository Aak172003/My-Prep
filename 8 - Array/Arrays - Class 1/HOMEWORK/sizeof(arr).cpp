#include<iostream>
using namespace std;
int main(){

    int arr[]={};
    cout<<sizeof(arr);           //   0 * 4 = 0

    return 0;
}

#include<iostream>
using namespace std;
int main(){

    int arr[5]={};
    cout<<sizeof(arr);            //  5 * 4 = 20

    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5};
    cout<<sizeof(arr);            //  5 * 4 = 20

    return 0;
}