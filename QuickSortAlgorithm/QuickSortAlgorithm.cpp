// QuickSortAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int partitionIndex(int arr[], int s, int e) {
	int pivot = arr[e];
	int pIndex = s;
	for (int i = s; i < e ; ++i) {
		if (arr[i] <= pivot) {
		//	swap(arr[i], arr[pIndex]);
			int temp = arr[i];
			arr[i] = arr[pIndex];
			arr[pIndex] = temp;
			pIndex++;
		}
	}
	int temp = arr[e];
	arr[e] = arr[pIndex];
	arr[pIndex] = temp;
	// swap(arr[e], arr[pIndex]);
	return pIndex;
}
void QuickSort(int arr[], int s, int e) {
	if (s < e) {
		int p = partitionIndex(arr, s, e);
		QuickSort(arr, s, p - 1);
		QuickSort(arr, p + 1, e);
	}

}
int main()
{
	int size;
	cout << "Enter the size of unsorted array you want to sirt them by Quick Sort" << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "Enter a "<<size<<" numbers you want to sort..." << endl;
	for (int i = 0; i < size; ++i) {
		cin >> arr[i];
	}
	cout << "Before sorted..." << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i]<<" ";
	}
	cout << endl;
	cout << "After sorted..." << endl;
	QuickSort(arr, 0, size-1);
	for (int i = 0; i < size; ++i) {
		cout << arr[i]<<" ";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
