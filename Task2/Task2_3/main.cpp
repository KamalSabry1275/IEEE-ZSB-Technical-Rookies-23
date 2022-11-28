#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    string test;
    int k = 0;
    cin >> test;
    for(int i = 0;i<test.size();i++){
        if(test[i] == s[k]) k++;
    }
    if(k == s.size()) cout << "YES";
    else cout << "NO";
    return 0;
}
