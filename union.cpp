
#include<iostream>
#include<set>
using namespace std;

// int main() {
//     int a[] = {1, 3, 5, 7, 9};
//     int b[] = {2, 4, 6, 8, 0};
//     int m = sizeof(a) / sizeof(a[0]); // size of array a
//     int n = sizeof(b) / sizeof(b[0]); // size of array b
//     int c[m + n]; // size of array c is m + n

//     int i = 0, j = 0, k = 0;

//     // Merge two arrays into array c
//     while (i < m && j < n) {
//         if (a[i] < b[j]) {
//             c[k++] = a[i++];
//         } else {
//             c[k++] = b[j++];
//         }
//     }

//     // If any elements are left in array a
//     while (i < m) {
//         c[k++] = a[i++];
//     }

//     // If any elements are left in array b
//     while (j < n) {
//         c[k++] = b[j++];
//     }

//     // Output the merged array
//     cout << "Merged array: ";
//     for (int k = 0; k < m + n; k++) {
//         cout << c[k] << " ";
//     }
//     cout << endl;

//     return 0;
// }


// union of 2 arrays
int main(){
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 9};  // Notice 9 is repeated in both arrays

    int m = sizeof(a) / sizeof(a[0]); // Size of array a
    int n = sizeof(b) / sizeof(b[0]); // Size of array b

    // Create a set to store the union of two arrays
    set<int> unionSet;

    // Insert elements of the first array
    for (int i = 0; i < m; i++) {
        unionSet.insert(a[i]);
    }

    // Insert elements of the second array
    for (int i = 0; i < n; i++) {
        unionSet.insert(b[i]);
    }

    // Output the union of the two arrays
    cout << "Union of the arrays: ";
    for (int elem : unionSet) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}

