#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Time complexity O(1)
        Memory complexity O(1);
        
    */
    /* int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int sum = a + b + c;
    int mul = a * b * c;

    cout << maxi << "\n";
    cout << mini << "\n";
    cout << sum << "\n";
    cout << mul << "\n"; */

// ===========================================================
// ===========================================================

// Time complexity = O(n + 1 + n + 1) = O(2*n + 1) = O(2*n) = O(c*n) = O(n)
// Memory complexity = O(n)

/*     int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_num = a[0];
    int min_num = a[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        max_num = max(max_num, a[i]);
        min_num = min(min_num, a[i]);
        sum = sum + a[i];
    }
    cout << max_num << "\n";
    cout << min_num << "\n";
    cout << sum << "\n"; */

    // The timecomplexity = (n ^ 2);
    // Memory = O(n);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        string ans = "NO\n";
        for (int j = 0; j < n; j++)
        {
            if(i==j)
                continue;
            if(a[i] == a[j])
            {
                ans = "YES\n";
            }
        }
        cout << "i = " << i << " " << ans;
    }

    return 0;
}