#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    static int ans = 0;
    if (n == 0)
        return ans;
    ans += n;
    sum(n - 1);
}
int main()
{
    cout << sum(15) << endl;
    return 0;
}