#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end) return;
	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}


int main()
{
    int m;
    cin >> m;
    int remaining[m];
    int capacity[m];

    for(int i = 0;i<m;i++){
        cin >> remaining[i] >> capacity[i];
    }
    quickSort(capacity,0,m-1);
    int sumCap = capacity[m-1] + capacity[m-2];
    int sumRem = 0;
    for(int i = 0;i<m;i++){
        sumRem += remaining[i];
    }

    if(sumCap > sumRem) cout << "Yes";
    else cout << "No";

    return 0;
}
