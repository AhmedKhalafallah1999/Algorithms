// SelectionSortAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void SelectionSort(int arr[]) {

	for (int i = 0; i < 10-1; ++i) {
		int min = i;
		for (int j = i + 1; j < 10; ++j) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	for (int i = 0; i < 10; ++i) {
		cout << arr[i] << " ";
	}
	
}
int main()
{
	cout << "Enter an unsorted array, you want to arrang ?!";
	int arr[10];
	for (int i = 0; i < 10; ++i) {
		cin >> arr[i];
	}
	
    SelectionSort(arr);
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
