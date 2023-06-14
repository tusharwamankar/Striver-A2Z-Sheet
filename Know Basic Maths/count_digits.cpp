#include <bits/stdc++.h>
using namespace std;

long long int countDigits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans++;
        n /= 10;
    }
    return ans;
}
int main()
{
    cout << countDigits(2234342);
    return 0;
}