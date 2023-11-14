// SelectionSortAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void InsertionSort(int arr[]) {

	for (int i =1; i < 5; ++i) {
		int key = arr[i];
		int j = i - 1;
		while (j>=0 && arr[j]>key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < 5; ++i) {
		cout << arr[i] << " ";
	}

}
int main()
{
	cout << "Enter an unsorted array, you want to arrang ?!";
	int arr[5];
	for (int i = 0; i < 5; ++i) {
		cin >> arr[i];
	}

	InsertionSort(arr);
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
