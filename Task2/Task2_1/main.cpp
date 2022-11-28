#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int Max = 1000;
    string num = to_string(rand() % Max);
    string userNum = "";
    cout << num << "\n";
    cout << "Enter a 3-digit number:" << "\n";
    while(userNum != num){
        cin >> userNum;
        int hitCount = 0;
        int missCount = 0;
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                if(num[i] == userNum[j]){
                    if(i == j) hitCount++;
                    else missCount++;
                    break;
                }
            }
        }
        cout << hitCount << " hit " << missCount << " miss " << "\n";
    }
    return 0;
}
