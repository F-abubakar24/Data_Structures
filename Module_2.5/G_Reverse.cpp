#include <bits/stdc++.h>
using namespace std;
string reverse(string str, int len, int l, int r)
{
    if (l < 0 || r >= len || l > r)
        return str;
    while (l < r)
    {
        char c = str[l];
        str[l] = str[r];
        str[r] = c;

        l++;
        r--;
    }

    return str;
}
int main()
{
    int l,r;
    cin>>l;
    cin>>r;
    string str;
    cin>>str;
    int len = str.length();
    cout << reverse(str, len, l-1, r-1);

    return 0;
}