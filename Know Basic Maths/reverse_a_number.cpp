#include <bits/stdc++.h>
using namespace std;
int reverseNo(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}
int main()
{
    cout<<reverseNo(1234);
    return 0;
}