#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for ( int i = 0; i < n; i++ ) cout << arr[i] << " ";
    cout << endl;
}

// Time Complexity:- O(N^2) 
// Auxiliary Space:- O(1)

void swap( int * x, int * y ) {
    int temp = *x;
    *y = *x;
    *x = temp;
}

void insertionSort( int arr [], int n ) {

    for ( int i = 0; i < n - 1; i++ ) {

        if ( arr[i] > arr[i+1] ) {

            swap(arr[i], arr[i+1]);

            for ( int j = i ; j >= 1; j-- ) {
                if ( arr[j] < arr[j-1] ) swap(arr[j], arr[j-1]);   
            }

        }

    }

}

int main () {

    int arr [] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;

}
