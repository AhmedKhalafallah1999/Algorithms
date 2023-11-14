// HeapSortAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Heap {
    int heap_size;
    int* hArr,*temp;
    int tempSize;
public:
    Heap(int arr[],int size) {
        heap_size = size;
        tempSize = size;
        hArr = new int[size];
        for (int i = 0; i < heap_size; ++i) {
            hArr[i] = arr[i];
        }
        temp = new int[size];
    }
    void print() {
        for (int i = 0; i < tempSize; ++i) {
            cout << hArr[i] << " ";
        }
    }
    void heapSort() {
        int j = 0;
        while (j<tempSize)
        {
            for (int i = ((heap_size - 1) - 1 / 2); i >= 0; --i)
            {
                heapify(i);
            }
         temp[j] =  extractMin();
         j++;
        }
        for (int i = 0; i < j; ++i) {
            hArr[i] = temp[i];
        }
       
    }
    void heapify(int i) {
        int smallest = i;
        int l = left(i);
        int r = right(i);
        if (l<heap_size && hArr[l] < hArr[smallest]) {
            smallest = l;
        }
        if (r<heap_size && hArr[r] < hArr[smallest]) {
            smallest = r;
        }
        if (smallest != i) {
            swap(hArr[smallest], hArr[i]);
        }
    }
    int left(int i) {
        return (2 * i) + 1;
    }
    int right(int i) {
        return (2 * i) + 2;
    }
    int parent(int i) {
        return (i - 1) / 2;
    }
    int extractMin() {
        int Min = hArr[0];
        if (heap_size == 0) {
            cout << "There is no values to extract...\n";
            return 0;
        }
        else if (heap_size == 1) {
            heap_size--;
            return Min;
        }
        else {
            hArr[0] = hArr[heap_size - 1];
            heap_size--;
            heapify(0);

        }
        return Min;
    }
};
int main()
{
    cout << "Enter the size of arra which is need to sort them by Heap!\n";
    int size;
    cin >> size;
    cout << "Enter the numbers of unSorted Array..\n";
    int* hArr = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> hArr[i];
    }
    // Methodology
    Heap ex(hArr,size);
    ex.print();
    ex.heapSort();
    cout << endl;
    ex.print();

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
