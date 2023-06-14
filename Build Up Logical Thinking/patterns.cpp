#include <bits/stdc++.h>
using namespace std;
void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);

int main()
{
    // pattern1(5);
    // pattern2(5);
    // pattern3(5);
    pattern4(5);
    return 0;
}
void pattern1(int n)
{
    /*
     *****
     *****
     *****
     *****
     *****
     */
    for (int i = 0; i < n; ++i)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    /*
     *****
     ****
     ***
     **
     *
     */
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    /*
     *
     **
     ***
     ****
     *****
     */
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    /*
     1
     12
     123
     1234
     12345
     */
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    /*
     1
     22
     333
     4444
     55555
     */
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i;
        }
        cout << endl;
    }
}