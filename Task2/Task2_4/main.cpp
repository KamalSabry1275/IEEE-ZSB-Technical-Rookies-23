#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> series;
    while(true){
        int m;
        cin >> m;
        series.push_back(m);
        if(cin.get() == '\n') break;
    }

    int key = series[0];
    cout << key << " ";
    for(int e:series){
        if(e != key){
            cout << e << " ";
            key = e;
        }
    }
    return 0;
}

//if series from 1 to 9
/*
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
*/
