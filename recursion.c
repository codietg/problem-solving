#include<stdio.h>


void printNumbers(int n) {
    if (n == 1) {
        printf("%d ", n);
        return ;
    }
    printNumbers(n-1);
    printf("%d\t",n);
}

int main() {
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printNumbers(n);
    return 0;
}


