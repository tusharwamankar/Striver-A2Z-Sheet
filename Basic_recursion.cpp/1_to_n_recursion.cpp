#include <bits/stdc++.h>
using namespace std;
void prt(int n)
{
    if (n == 0)
        return;
    static int i = 1;
    cout << i << " ";
    i++;
    prt(n - 1);
}
int main()
{
    prt(10);
    return 0;
}