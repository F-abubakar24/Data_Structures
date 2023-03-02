#include<bits/stdc++.h>
using namespace std;

// Memory complexity O(n)
// Time complexity O(n^2)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int idx = i;
        while (idx >= 1)
        {
            if(a[idx-1] >= a[idx])
            {
                swap(a[idx-1], a[idx]);
                idx--;
            }else{
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}