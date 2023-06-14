#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {2, 124, 243, 34, 35, 4653, 34, 234, 235, 46};
    cout << *max_element(arr, arr + 10) << endl;
    return 0;
}