#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for(int i = 0;i<num;i++){
        int n,c,m;
        cin >> n >> c >> m;
        int count = n / c;
        int mod = count % m;
        int newC = count / m;
        count += (mod + newC)/m;
        count += newC;
        arr[i] = count;
    }
    for(int i = 0;i<num;i++) cout << arr[i] << "\n";
    return 0;
}
