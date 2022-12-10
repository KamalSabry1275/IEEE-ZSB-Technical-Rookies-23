#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1 , w1 , y1;
    int d2 , w2 , y2;
    cin >> d1 >> w1 >> y1;
    cin >> d2 >> w2 >> y2;
    if(y1 == y2){
        if(w1 == w2){
            if(d1 == d2){
                cout << 0;
            }else  if(d1 > d2){
                cout << 15 * abs(d1 - d2);
            }else cout << 0;
        }else if(w1 > w2){
            cout << 500 * abs(w1-w2);
        }else cout << 0;
    }else if(y1 > y2){
        cout << 10000;
    }else cout << 0;
    return 0;
}
