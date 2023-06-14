#include <bits/stdc++.h>
using namespace std;
void Frequency(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
}
int main()
{
    int arr[10] = {10, 3, 14, 4, 3, 10, 3, 3, 4, 5};
    Frequency(arr, 10);
    return 0;
}