// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int BinarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return 1;
    }
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            BinarySearch(arr, left = mid + 1, right, target);
        }
        else {
            
            BinarySearch(arr,left, right = mid - 1, target);

        }
    
}
using namespace std;
int main()
{
    int arr[10], left = 0, right = 9, target;
    cout << "Enter the values of the sorted array: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    cout << "enter a target you want to search";
    cin >> target;
    int output = BinarySearch(arr, 0, 9, target);
    cout << output;

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
