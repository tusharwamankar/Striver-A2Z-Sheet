#include <bits/stdc++.h>
using namespace std;
int Series(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return Series(n - 1) + Series(n - 2);
}
int main()
{
    cout << Series(5);
    return 0;
}