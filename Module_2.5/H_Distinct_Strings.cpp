#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int counter;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    do
    {
        counter++;
    } while (next_permutation(s.begin(), s.end()));

    cout<<counter<<"\n";
    return 0;
}