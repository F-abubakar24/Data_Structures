#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Iam eating rice.";
    // string s2 = "also a web Developer";

    // s.erase(s.begin() + 1);
    // cout << s;

    string s;
    getline(cin,s);

    s.erase(s.begin());
    s.pop_back();

    cout << s;


    return 0;
}