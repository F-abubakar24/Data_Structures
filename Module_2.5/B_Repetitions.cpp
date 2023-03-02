#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int sub_ans = 1, ans = 1;
    cin >> str;

    for (int i = 0; i<str.size()-1; i++)
    {
        if(str[i] == str[i + 1])
        {
            sub_ans++;
        }
        else
        {
            sub_ans = 1;
        }

        if(sub_ans > ans)
        {
            ans = sub_ans;
        }
    }
    cout << ans;
    return 0;
}