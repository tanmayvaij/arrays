# Searching and Sorting in Arrays

### *Searching in Arrays*

> 1. Linear Search

```cpp
// Time Complexity:- O(N)
// Auxiliary Space:- O(1)

int linearSearch( int arr [], int n, int x ) {
    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] == x ) return i;
    }
    return -1;
}
```

> 2. Binary Search

```cpp
// Time Complexity:- O(logN)
// Auxiliary Space:- O(1)

int binarySearch(int arr [], int n, int x) {
    int l = 0, r = n - 1;
    while ( l <= r ) {
        int m = (l + r) / 2;
        if ( arr[m] == x )
            return m;
        else if ( arr[m] < x )
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
```

### *Sorting in Arrays*

> 1. Bubble Sort

```cpp
// Time Complexity:- O(N^2)
// Auxiliary Space:- O(1) 

void swap( int * x, int * y ) {
    int temp = *x;
    *y = *x;
    *x = temp;
}

void bubbleSort( int arr [], int n ) {

    for ( int i = 0; i < n-1; i++ ) {

        int swapped = false;

        for ( int j = 0; j < n-i-1; j++ ) {
            if ( arr[j] > arr[j+1] ) { 
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if ( swapped == false ) break;

    }

}
```

> 2. Insertion Sort

```cpp
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
```