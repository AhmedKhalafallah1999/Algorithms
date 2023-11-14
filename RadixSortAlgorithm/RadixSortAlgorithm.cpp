// RadixSortAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void countSort(int arr[], int size,int div) {
    int* count = new int[10];
    int* outArray = new int[size];
    for (int i = 0; i < 10; ++i) {
        count[i] = 0;
    }
    for (int i = 0; i < size; ++i) {
        count[(arr[i]/div)%10]++;
    }
    for (int i = 1; i < 10; ++i) {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = size - 1; i >= 0; i--) {
        outArray[count[(arr[i] / div) % 10] - 1] = arr[i];
        count[(arr[i] / div) % 10]--;
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = outArray[i];
    }
}
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;

}
void radixSort(int arr[], int size) {
    int max = findMax(arr, size);
    for (int i = 1; (max / i) > 0; i *= 10) {
        countSort(arr, size, i);
    }
}
int main()
{
    std::cout << "Enter the size of the array you want to sort them by using Radix Algorithm!\n";
    int size;
    cin >> size;
    std::cout << "Enter the array you want to sort them by using Radix Algorithm!\n";
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    radixSort(arr, size);
    for (int i = 0; i < size; ++i) {
        cout<< arr[i]<<" ";
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
