#include <stdio.h>

void restricted_access(){
    printf("\n[!!!] FLAG CAPTURED: You have successfully bypassed security and executed unauthorized code! [!!!\n");
}

void normal_user_portal(){
    printf("\n[+] Welcome to the standard user dashboard. Nothing interesting here.\n");
}

int main(){
    void (*engine_ptr)() = normal_user_portal;
    long secret_offset = 0;
    printf("=== SECURE SYSTEM INTEGRITY ENGINE ===\n");
    printf("Location of normal_user_portal: %p\n", (void*)normal_user_portal);
    printf("Location of restricted_access: %p\n", (void*)restricted_access);
    printf("Current engine_ptr targets: %p\n", (void*)engine_ptr);
    
    printf("\nEnter a memory offset adjustment numbr: ");
    scanf("%ld", &secret_offset);


     engine_ptr = (void (*)())((long)engine_ptr + secret_offset);

     printf("\nAttempting execution via engine_ptr targeting: %p...\n", (void*)engine_ptr);

     engine_ptr();
     return 0;

}
