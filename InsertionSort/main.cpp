#include <iostream>

using namespace std;
    void InsertionSort(int arr[],int aSize){
    for (int i=1 ; i<aSize ; ++i){
            int key = arr[i];
            int k = i - 1;
        while (k>=0 && arr[k]>key){
            arr[k+1] = arr[k];
            k--;
    }
    arr[k+1] = key;
    }
   // return arr[];
    }
int main()
{

    cout << "Enter the size of an array you want to sort by insertion sort" << endl;
    int aSize;
    cin>>aSize;
    int arr[aSize];
    cout<<"Enter the items"<<endl;
    for (int i=0 ; i<aSize  ; ++i){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before Sorted"<<endl;
    for (int i=0 ; i<aSize  ; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Sorted"<<endl;
     InsertionSort(arr,aSize);
     for (int i=0 ; i<aSize  ; ++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
