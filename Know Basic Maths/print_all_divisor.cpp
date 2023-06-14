#include <bits/stdc++.h>
using namespace std;
void PrintDivisor(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}
int main()
{
    PrintDivisor(30);
    return 0;
}