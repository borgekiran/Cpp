
// Sum of Natural Number using loop

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;

    cout << " Enter a positive integer: " << endl;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum = sum + i;
    }
    cout << "Sum = " << sum;

    return 0;
}