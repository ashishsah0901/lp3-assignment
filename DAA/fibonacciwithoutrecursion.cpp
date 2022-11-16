#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, sum, i, number;
    cout << "Enter the number of elements: ";
    cin >> number;
    cout << a << " " << b << " ";
    for (i = 2; i < number; ++i)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    return 0;
}

/
