#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int no = n;
    int num = 0;
    while (n > 0)
    {
        int i = n % 10;
        num += i * i * i;
        n /= 10;
    }
    if (num == no)
        return true;
    return false;
}
int main()
{
    cout << check(153) << endl;
    cout << check(155) << endl;
    return 0;
}