#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string sort(string s1){
    string s ="0000";
    for(int i = 0;i<s1.size();i++){
        s[i] = s1[i];
    }
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

string reverse(string s1,string s2){
    for(int i = 0;i<4;i++) s2[i] = s1[s1.size()-1-i];
    return s2;
}

int main()
{
    string s1,s2;
    cin >> s1;
    s1 = sort(s1);
    s2 = s1;
    s2 = reverse(s1,s2);
    int num1 = stoi(s1);
    int num2 = stoi(s2);
    int divide = num1 - num2;
    int count = 1;
    while(divide != 6174){
        s1 = sort(to_string(divide));
        s2 = reverse(s1,s2);
        int num1 = stoi(s1);
        int num2 = stoi(s2);
        divide = num1 - num2;
        count++;
    }
    cout << count;
    return 0;
}
