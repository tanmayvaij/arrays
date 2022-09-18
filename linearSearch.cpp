#include <iostream>
using namespace std;

// Time Complexity:- O(N)
// Auxiliary Space:- O(1)

int linearSearch( int arr [], int n, int x ) {
    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] == x ) return i;
    }
    return -1;
}

int main () {

    int arr [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(int);

    cout << linearSearch( arr, n, 6 ) << endl;

    return 0;

}
