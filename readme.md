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