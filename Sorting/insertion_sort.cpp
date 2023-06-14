#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[10] = {5, 2, 423, 42, 5, 24, 6, 46, 346, 4};
    InsertionSort(arr, 10);
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}