#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cities,spaceStation;
    cin >> cities >> spaceStation;
    int SSC[spaceStation];
    for(int i = 0;i<spaceStation;i++){
        cin >> SSC[i];
    }
    int distance[cities];
    for(int i = 0;i<cities;i++){
        distance[i] = cities;
    }
    for(int i = 0;i<spaceStation;i++){
        for(int j = 0;j<cities;j++){
            if(j != SSC[i]){
                int diff = abs(j-SSC[i]);
                if(distance[j] > diff && distance[j] != -1) distance[j] = diff;
            }else if(j == SSC[i]) distance[j] = -1;
        }
    }
    int bigSpace = distance[0];
    for(int i = 1;i<cities;i++){
        if(distance[i] > bigSpace) bigSpace = distance[i];
    }
    cout << bigSpace;

    return 0;
}
