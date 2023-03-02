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
    for (int pas = 0; pas < n; pas++)
    {
        int last = n - 1 - pas;
        bool sorted = true;
        for (int j = 0; j < last; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j + 1]);
                sorted = false;
            }
        }
        if(sorted)
            break;
            
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    cout << "Final = ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    return 0;
}