#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long int n, ans = 0;
    cin >> n;

    cout << n << " ";
    while (n > 1)
    {
        if(n%2 == 0)
        {
            ans = n / 2;
            cout << ans << " ";
            n = ans;
        }
        else
        {
            ans = (n * 3) + 1;
            cout << ans << " ";
            n = ans;
        }

    }
    return 0;
}