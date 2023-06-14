#include <bits/stdc++.h>
using namespace std;
vector<int> indexSum(int n, int target, vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        if (v[s] + v[e] == target)
        {
            return {s, e};
        }
        else if (v[s] + v[e] < target)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
}
int main()
{
    int n, target;
    cin >> n;
    cin >> target;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cout << endl;
    vector<int> ans = indexSum(n, target, v);
    for (int i = 0; i < 2; ++i)
    {
        cout << ans[i] << " ";
    }

    return 0;
}