#include <iostream>
using namespace std;
void printFibonacci(int n)
{
    static int a = 0, b = 1, sum;
    if (n > 0)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << sum;
        printFibonacci(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    cout << "0 1 ";
    printFibonacci(n - 2);
    return 0;
}
