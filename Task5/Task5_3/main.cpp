#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> numbers;
    bool end = false;
    int sum = 0;
    while(!(num == 1)){
        while(!(num == 0)){
            int n = num % 10;
            sum += pow(n,2);
            num /= 10;
        }
        num = sum;
        sum = 0;
        for(int i = 0;i<numbers.size();i++) if(numbers[i] == num) end = true;
        if(end) break;
        numbers.push_back(num);
    }
    if(num == 1) cout << "true";
    else cout << "false";
    return 0;
}
