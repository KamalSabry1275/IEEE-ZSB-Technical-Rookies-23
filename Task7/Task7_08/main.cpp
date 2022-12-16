#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while(i<s.size()){
        if(s.substr(i,2) == "-."){
            cout << 1 ;
            i += 2;
        }else if(s.substr(i,2) == "--"){
            cout << 2 ;
            i += 2;
        }else if(s.substr(i,1) == "."){
            cout << 0 ;
            i++;
        }
    }
    return 0;
}
