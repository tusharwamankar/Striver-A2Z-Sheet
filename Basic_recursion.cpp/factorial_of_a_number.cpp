#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    static int ans = 1;
    if(n==1)
    {
        return ans;
    }
    ans*= n;
    fact(n-1);
}
int main()
{
    cout << fact(6) << endl;
    return 0;
}