#include<stdio.h>

int main () {

    int n;
    printf("Enter the number :");
    scanf("%d" , &n);

    for(int i=0; i<=10; i++) {
        i*n;
        printf("%d\n" , i*n);
    }
}