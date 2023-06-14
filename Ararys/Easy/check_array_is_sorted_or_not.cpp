#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 62, 7, 8, 89, 100};
    cout << check(arr, 10);
    return 0;
}