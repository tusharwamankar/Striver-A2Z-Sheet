#include <bits/stdc++.h>
using namespace std;

void prt(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    prt(n - 1);
}
int main()
{
    prt(10);
    return 0;
}