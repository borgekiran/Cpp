#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i, length;
    int flag = 0;

    cout << "\n Enter the number: ";
    cin >> str;

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << " " << str << " is not a palindrome: ";
    }

    else
    {
        cout << " " << str << " is a palindrome: ";
    }
}