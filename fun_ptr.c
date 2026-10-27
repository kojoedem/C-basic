#include <stdio.h>


void normal_login(){
    printf("[+] Performing normal user login procedures...\n");

}

void secret_backdoor(){
    printf("[-] EXPLOIT ALERT:You riggered the root backdoor function!\n");

}
int main(){
    void (*function_map)();
    printf("Address of normal_login: %p\n", (void*)normal_login);
    printf("Address of secret_backdoor: %p\n", (void*)secret_backdoor);

    function_map = normal_login;
    function_map();


    function_map = secret_backdoor;
    function_map();

    return 0;

}
