#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool palindrome = true;
    for(int i =0;i<s.size()/2;i++){
        if(s[i] != s[s.size()-1-i]){
            palindrome = false;
            break;
        }
    }
    if(palindrome) cout << "yes";
    else cout << "no";
    return 0;
}
