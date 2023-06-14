#include <bits/stdc++.h>
using namespace std;
void Display(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "name" << " ";
    Display(n - 1);
}
int main()
{
    Display(5);
    return 0;
}