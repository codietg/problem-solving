// #include<iostream>
// using namespace std;
// int main(){
//     int a[30]={12,34,4,6,7,8,9,10};
//     int size=8;
//     int start=0;
//     int end=size-1;
//     while(true){
//         if(start>end){
//             break;
//             cout<<a[start]<<" ";
//             cout<<a[end]<<" ";
//             start++;
//             end--;
//         }
//     }
// }
#include <iostream>
using namespace std;

int main() {
    int a[30] = {12, 34, 4, 6, 7, 8, 10};  // Initialized array
    int size = 7;  // Number of elements in the array
    int start = 0;
    int end = size - 1;

    // Print elements from both ends alternately
    while (start <= end) {
        cout << a[start] << " ";
        if (start != end) {  // Avoid duplicate print for the middle element
            cout << a[end] << " ";
        }
        start++;
        end--;
    }

    cout << "\nArray elements: ";
    // Print the original array
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
