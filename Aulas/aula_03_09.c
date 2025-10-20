#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    /*int arr[4] = {10,20,30,40};
    printf("%p\n",  arr);
    printf("%p\n", &arr[0]);
    printf("%d\n", *arr);
    

    int *ptr = arr;
    int i;
    for (i=0; i<4; i++){
        printf("%d\n", *(ptr+i));
    }*/

    int arr[4]= {10,20,30,40};
    *arr = 7;
    *(arr +1) = 14;
    int i;
    for (i=0; i<4; i++){
        printf("%d\n", *(arr+i));
    }

int n,i;
malloc()


int n,i;
calloc()

free()}