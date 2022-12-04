#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string sort(string s){
    for(int j = 0;j<4;j++){
        int max =j;
        for(int i = j+1;i<4;i++){
            if(s[i] > s[max]) max = i;
        }
        char temp = s[max];
        s[max] = s[j];
        s[j] = temp;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    string s1[n];
    string s[n];
    for(int i = 0;i<n;i++){
        cin >> s1[i];
        s[i] = s1[i];
        s1[i] = sort(s1[i]);
    }

    for(int i = 0;i<n;i++){
        if(s1[i] == "null") continue;
        cout << s[i] << " ";
        for(int j = i+1;j<n;j++){
            if(s1[i] == s1[j] && s1[j] != "null"){
                cout << s[j] << " ";
                s1[j] = "null";
            }
        }
        cout << "\n";
    }
    return 0;
}
