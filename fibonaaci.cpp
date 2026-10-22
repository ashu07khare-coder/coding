#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter the number till you want to procees fibonacci series";
    cin >> n;
    int a = 0, b = 1;
    for (int i = 2; i < n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << sum;
}