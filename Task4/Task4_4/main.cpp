#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n++;
    int arr[n];
    arr[0] = 0;
    for(int i = 1;i<n;i++) cin >> arr[i];

    for(int i = (n-1) ;i>=0;i-- ){
        if(arr[i] == 9) {
            arr[i] = 0;
        }else {
            arr[i]++;
            break;
        }
    }
    int i = 0;
    if(arr[0] == 0) i =1;
    for(;i<n;i++){
        cout << arr[i];
    }
    return 0;
}
