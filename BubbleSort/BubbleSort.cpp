// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void BubbleSort(int arr[]) {
    int i, j;
    for (i = 0; i < 6; ++i) {
        for (j = 0; j < 6 - i - 1;++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < 6; ++k) {
        cout << arr[k] << " ";
    }
}
int main()
{
    cout << "Enter an array you want to rearrange" << endl;
    int arr[6];
    for (int i = 0; i < 6; ++i) {
        cin >> arr[i];
    }
    BubbleSort(arr);
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
