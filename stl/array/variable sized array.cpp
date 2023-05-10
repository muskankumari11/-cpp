#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, k, idx_i, idx_j;
    cin >> n >> q;

    int** arr = new int*[n]; // Create an array of int pointers

    // Populate the arrays
    for (int i = 0; i < n; i++) {
        cin >> k;
        arr[i] = new int[k]; // Create a dynamic array for each row

        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    // Process the queries
    for (int i = 0; i < q; i++) {
        cin >> idx_i >> idx_j;
        cout << arr[idx_i][idx_j] << endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
