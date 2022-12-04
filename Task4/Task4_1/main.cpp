#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0;i<n;i++) cin >> arr[i];
    int max = arr[0];
    for(int i = 1;i<n;i++) if(arr[i] > max) max = arr[i];
    max++;
    int count[max];
    for(int i = 0;i<max;i++) count[i] = 0;
    for(int i = 0;i<n;i++) count[arr[i]]++;
    int m = count[0];
    for(int i = 0;i<k;i++){
        for(int j = 0;j<max;j++){
            if(count[j] > count[m]) m = j;
        }
        cout << m << " ";
        count[m] = 0;
    }

    return 0;
}
