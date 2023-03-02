#include<bits/stdc++.h>
using namespace std;

void erase_char(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout << "In function s = " << s << "\n";
}


int main()
{
    string s;
    cin >> s;
    
    erase_char(s);
    cout << s << endl;

    return 0;
}