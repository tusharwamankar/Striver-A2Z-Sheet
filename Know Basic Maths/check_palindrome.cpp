#include <bits/stdc++.h>
using namespace std;
bool Check(int n)
{
    string s = to_string(n);
    int m = s.length();
    for (int i = 0; i < m / 2; ++i)
    {
        if (s[i] != s[m - i - 1])
            return false;
    }
    return true;
}
int main()
{
    cout << Check(1234621);
    return 0;
}