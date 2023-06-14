#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 4, 7, 7, 5};
    sort(arr, arr + 6);
    int x = *max_element(arr, arr + 6);
    for (int i = 5; i >= 0; i--)
    {
        if (arr[i] != x)
        {
            cout << arr[i] << ":- second largest element " << endl;
            break;
        }
    }

    return 0;
}