#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string primeFactor(int n){
    if(n == 1) return "";
    for(int i = 2;i<=n;i++){
        if(n%i == 0){
            n = n / i;
            return to_string(i) + " " + primeFactor(n);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    cout << primeFactor(n);
    return 0;
}
