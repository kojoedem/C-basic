#include <stdio.h>

int main(){
    int critical_data = 1337;
    int *ptr;
    ptr = &critical_data;
    printf("---- READING MENORY ---\n");
    printf("Value of critical_data %d\n", critical_data);
    printf("Memory address of critical_data:  %p\n", (void*)&critical_data);
    printf("Value stored insie ptr:    %p\n", (void*)ptr);

    printf("Value that ptr is pointing to: %d\n", *ptr);
    printf("\n-- HIJACKING MEMORY VIA THE POINTER ---\n");

    *ptr = 9999;

    printf("New valu of critical_data: %d\n", critical_data);

    return 0;


}
