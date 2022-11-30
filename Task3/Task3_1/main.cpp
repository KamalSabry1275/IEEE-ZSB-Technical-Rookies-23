#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int arr[m][m];
    for(int i = 0;i<m;i++){
        for(int j =0 ;j<m;j++){
            cin >> arr[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i<m;i++){
        for(int j =0 ;j<m;j++){
            if(i == j) sum1 += arr[i][j];
            if(i == (m-1-j)) sum2 += arr[i][j];
        }
    }

    cout << abs(sum1-sum2);
    return 0;
}
