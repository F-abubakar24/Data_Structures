#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m;
    cin >> m;

    vector<int> a;
    a.resize(m);

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if(i == 0)
        {
            ans++;
            continue;
        }
        if(a[i] != a[i-1])
            ans++;
    }
    cout << ans << "\n";
    return 0;
}