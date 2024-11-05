#include<stdio.h>
// int main(){
// int a[20],n,i,j,temp,min;
// printf("enter the no of array element");
// scanf("%d",&n);
// for(i=0;i<n;i++){
//     printf("element %d is",i+1);
//     scanf("%d\t",&a[i]);
// }
// for(i=0;i<n-1;i++){
//     min=i;
//     for(j=i+1;j<n-1;j++){
//         if(a[j]<a[min     ]){
//             min=j;
//         }
//         if(min!=i){
//             temp=a[i];
//             a[i]=a[min];
//             a[min]=temp;
//         }
//     }
//     // printing sorted array
//     printf("the sorted array is");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

int main() {
    int a[20], n, i, j, temp, min;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Element %d is: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i= 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) { 
            if (a[j] < a[min]) { 
                min = j;
            }
        }
        
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    // Printing sorted array
    printf("The sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n"); 
    return 0;
}
