#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    while(cin.get() != '\n'){
        int m;
        cin >> m;
        arr.push_back(m);
    }

    int min = arr.size();

    for(int i = 0;i<arr.size();i++)
        for(int j = i+1;j<arr.size();j++)
            if(arr[i] == arr[j]){
                int distance = abs(i-j);
                if(distance < min) min = distance;
            }
    cout << min;
    return 0;
}
