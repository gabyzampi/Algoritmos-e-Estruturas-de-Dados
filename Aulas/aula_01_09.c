#include <stdio.h>
#include<string.h>

int main(){

    int idade = 41;
    printf("%d\n", idade);
    printf("%p\n", &idade);

    int*ptr = &idade;
    printf("%d\n", idade);
    printf("%p\n", &idade);
    printf("%p\n", ptr);

    int x = 5, y = 7, z = 0;
    z = x * y;
    int* p = NULL;
    p = &z;
    printf("\n%i", z);
    printf("\n%p", &z);
    printf("\n%p", p);

    int idade =41;
    int*ptr =&idade;
    printf("%p\n", ptr);
    printf("%d\n", *ptr); //desreferenciando


int*p = (int*)0x01A;
printf("Hex: %p | Dec %ld\n", (void*)p, (uintptr_t)p);
p++;
printf("Hex: %p | Dec %ld\n", (void*)p, (uintptr_t)p);
p = p-2;
printf("Hex: %p | Dec %ld\n", (void*)p, (uintptr_t)p);


int arr[4] = {10,20,30,40};
int i;
for (i = 0; i<4; i++) {
    printf("%p\n",  &arr[i]);
}
    return 0;

}