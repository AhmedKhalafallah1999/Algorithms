// CountSortAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void countSort(int inputArray[],int countArray[]) {
    for (int i = 0; i <7; ++i) {
        countArray[inputArray[i]]++;
    }
    for (int i = 1; i < 10; ++i) {
        countArray[i] = countArray[i] + countArray[i - 1];
    }
    int* outArray = new int[7];
    int j = 0;
    for (int i = 0; i < 10; ++i) {
        if ( countArray[i] !=0) {
            int count = 0;
            while (count<countArray[i]-countArray[i-1]) {

                outArray[j] = i;
                count++;
                j++;
            }
        }
    }
    for (int i = 0; i < 7; ++i) {
        cout << outArray[i] << " ";
    }
}
int main()
{

    std::cout << "Enter an array you want to sort them... " << endl;
    int* inputArray = new int[7];
    for (int i = 0; i < 7; ++i) {
        cin >> inputArray[i];
    }
    std::cout << "Enter an range... " << endl;
    int s, e;
    cin >> s >> e;
    int* countArray = new int[e];
    for (int j = 0; j <= e; ++j) {
        countArray[j] = 0;
    }
    countSort(inputArray, countArray);

   
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
