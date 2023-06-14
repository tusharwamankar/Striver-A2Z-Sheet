#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}
int main()
{
    int arr[10] = {5, 2, 423, 42, 5, 24, 6, 46, 346, 4};
    BubbleSort(arr, 10);
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
    return 0;
}