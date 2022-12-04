#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    bool found = false;
    for(int i = 0;i<s2.size();i++){
        if((s1[0] == s2[i] && (s1[1] == s2[i+1] || s1[1] == s2[i-1]))){
            found = true;
            break;
        }
    }
    if(found == false) cout << "false";
    else cout << "true";
    return 0;
}
