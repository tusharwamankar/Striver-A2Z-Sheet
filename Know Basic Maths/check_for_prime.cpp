#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    cout << isPrime(24) << endl;
    return 0;
}