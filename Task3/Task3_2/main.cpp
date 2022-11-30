#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(string names[],float arr[], int start, int end)
{
	float pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
	swap(names[pivotIndex], names[start]);
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i], arr[j]);
			swap(names[i++], names[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(string names[],float arr[], int start, int end)
{
	if (start >= end) return;
	int p = partition(names,arr, start, end);
	quickSort(names,arr, start, p - 1);
	quickSort(names,arr, p + 1, end);
}

int main()
{
    int m;
    cin >> m;
    string names[m];
    float grades[m];
    for(int i =0;i<m;i++){
        string name;
        float grade;
        cin >> name >> grade;
        names[i] = name;
        grades[i] = grade;
    }

    quickSort(names,grades, 0, m - 1);
    cout << "\n";
    int count = 1;
    int indexJ = m-1;
    int indexI = 0;
	for (int i = m-2; i >= 0; i--) {
		if(grades[indexJ] > grades[i]){
            count ++;
            indexJ = i;
		}
		if(count == 3) break;
	}
	count = 0;
	for (int i = indexJ; i >= 0; i--) {
		if(grades[indexJ] == grades[i]){
            count ++;
            indexI = i;
		}
		if(grades[indexJ] > grades[i]) break;
	}

    for(int i = 'A';i<='Z';i++){
        for(int j = indexI;j<=indexJ;j++){
            if(names[j][0] == (char)i){
                cout << names[j] << " " << grades[j] << "\n";
            }
        }
    }

    return 0;
}
