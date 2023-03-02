#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    int ans[100];
    int counter = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] == b[j])
            {
                remove(a.begin(), a.end(), a[i]);
            }
        }
    }


    // for (int i = 0; i < 10; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    return 0;
}