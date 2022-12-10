#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string nums[n];
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }

    for(int i = 0;i<n;i++){
        int count = 0;
        int n = nums[i].size();
        for(int j = 0;j<n;j++){
            int k = stoi(nums[i]);
            int m = nums[i][j] - 48;
            if(m != 0 && k % m == 0) count++;
        }
        cout << count << "\n";
    }

    return 0;
}
