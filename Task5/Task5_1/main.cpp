#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] > arr[largest]) largest = l;
	if (r < n && arr[r] > arr[largest]) largest = r;
	if (largest != i) {
		swap(arr[i], arr[largest]);
		partition(arr, n, largest);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	vector<int> v;
	while(true){
        int n;
        cin >> n;
        v.push_back(n);
        if(cin.get() == '\n') break;
	}
	int n = v.size();
	int arr[n];
	for(int i =0;i<n;i++) arr[i] = v[i];

	for (int i = n / 2 - 1; i >= 0; i--)
		partition(arr, n, i);

	printArray(arr, n);
}
