#include <iostream>
using namespace std;

int toggle(int i){
    if(i == 1) return 0;
    else return 1;
}

int main()
{
    int light[5][5] = {{0,0,0,0,0},{0,1,1,1,0},{0,1,1,1,0},{0,1,1,1,0},{0,0,0,0,0}};
    int arr[3][3];
    for(int i = 0;i<3;i++)
        for(int j = 0;j<3;j++){
            int m;
            cin >> m;
            arr[i][j] = m;
        }

    for(int i = 1;i<4;i++)
        for(int j = 1;j<4;j++){
            if(arr[i-1][j-1] % 2 == 1){
                light[i][j] = toggle(light[i][j]);
                light[i+1][j] = toggle(light[i+1][j]);
                light[i-1][j] = toggle(light[i-1][j]);
                light[i][j+1] = toggle(light[i][j+1]);
                light[i][j-1] = toggle(light[i][j-1]);
            }
        }

    for(int i = 1;i<4;i++){
        for(int j = 1;j<4;j++)
            cout << light[i][j];
        cout << "\n";
    }

    return 0;
}
