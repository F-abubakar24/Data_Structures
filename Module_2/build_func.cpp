#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 4, b = 5,c = 2, d= 767, e = 23;
    // int trying = min({a, b, c, d, e});
    // int trying = max({a, b, c, d, e});
    // cout << trying << endl;

    vector<int> a = {3, 2, 1, 5, 4};
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";

    sort(a.begin() + 1, a.begin() + 2 + 1);

    cout << "After sorting\n";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";

    return 0;
}