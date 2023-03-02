#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int odd_mult = 1;
    for (int i = 0; i < n; i++)
    {
        if(i%2 != 0)
        {
            odd_mult *= a[i];
        }
    }
    cout << odd_mult << "\n";
    return 0;
}