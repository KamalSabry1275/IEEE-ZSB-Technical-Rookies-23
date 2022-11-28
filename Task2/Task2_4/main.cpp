#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ol;
    getline(cin ,ol);
    char k = ol[0];
    cout << k << " ";
    for(int i = 0;i<ol.size();i++){
        if(ol[i] != ' '){
            if(ol[i] == k) continue;
            k = ol[i];
            cout << k << " ";
        }
    }
    return 0;
}
