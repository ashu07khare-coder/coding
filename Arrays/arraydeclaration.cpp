#include <iostream>
using namespace std;
int main()
{
    // array declaration
    int arr[5];
    // initialzation
    int arr1[5] = {1, 8, 78, 9, 0};
    cout << arr1[2] << endl;
    cout << arr1[3] << endl;
    cout << arr1[4] << endl;
    arr1[3] = 67;
    cout << arr1[3];
}