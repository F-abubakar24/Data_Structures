#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> a;
    // for (int i = 0; i < 10; i++)
    // {
    //     // cout << "Before push" << a.size() << endl;
    //     a.push_back(i);
    //     // cout << "After push" << a.size() << endl;
    // }

    // a.insert(a.begin() + 1, 100);

    // for (int i = 0; i<a.size(); i++)
    // {
    //     cout << a[i] << "\n";
    // }


    // a.erase(a.begin() + 1);
    // cout << "After delete\n";

    // a.pop_back();

    // for (int i = 0; i<a.size(); i++)
    // {
    //     cout << a[i] << "\n";
    // }

    vector<int> a = {1, 2, 3, 4, 5};
    a.resize(10);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << "\n";

    return 0;
}