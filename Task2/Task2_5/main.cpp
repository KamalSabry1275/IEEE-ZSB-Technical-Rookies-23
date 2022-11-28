#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int insertionSort(int arr[],int size){
    int key,j;
    for(int i = 1;i<size;i++){
        j = i - 1;
        key = arr[i];
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j --;
        }
        arr[j+1] = key;
    }
}

/*
insertion sort is check number and number in order is big or no is yes it swap them
Time Complexity: O(N^2)
Extra Space: O(1)
insertion sort is stable
*/

int main()
{
    int max = 1000;
    int arr[max];
    srand(time(0));

    for(int i = 0;i<max;i++){
        arr[i] = rand() % max;
        cout << arr[i] << " ";
    }

    insertionSort(arr,max);
    cout << "\n";

    for(int i = 0;i<max;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
