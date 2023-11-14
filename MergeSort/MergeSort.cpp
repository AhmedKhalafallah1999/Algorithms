// MergeSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    int temp[5];
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (int p = left; p < right; ++p) {
        arr[p] = temp[p];
    }

}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (right + left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main()
{
    //int n ;
   // cout << "Enter size of aaray..." << endl;
   //cin >> n;
    int arr[5];
    cout << "Enter the unsorted array..." << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
    cout << endl << "Before Sorting" << endl;;
    // Before Sorting
    for (int i = 0; i < 5; ++i) {
        cout<< arr[i]<<" ";
    }
    cout << endl<<"After Sorting"<<endl;
    // After Sorting
    mergeSort(arr, 0, 5 - 1);
    // After Sorting
    for (int i = 0; i < 5; ++i) {
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
