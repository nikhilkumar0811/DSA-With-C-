#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
int main()
{
    vector<int> v = {11, 7, 3, 12, 4};

    vector<int> ans = reverse(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }
    cout << endl;

    return 0;
}