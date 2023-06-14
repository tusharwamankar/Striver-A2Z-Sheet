#include <bits/stdc++.h>
using namespace std;
int removeduplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; ++j)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main()
{
    int arr[10] = {1, 3, 3, 4, 4, 62, 4, 1, 3, 100};
    sort(arr, arr + 10);
    int k = removeduplicates(arr, 10);
    for (int i = 0; i < k; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}