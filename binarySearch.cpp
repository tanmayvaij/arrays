#include <iostream>
using namespace std;

// Time Complexity:- O(logn)
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

int main () {

    int arr [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(int);
    
    cout << binarySearch(arr, n, 6) << endl;

    return 0;

}
