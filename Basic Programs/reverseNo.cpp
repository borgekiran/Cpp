#include <bits/stdc++.h> // reverse keyword store 
using namespace std;

int main()
{
    string str;

    cout << "Enter Your Number: " << endl;
    cin >> str;

    reverse(str.begin(), str.end());

    cout << str << endl;
}