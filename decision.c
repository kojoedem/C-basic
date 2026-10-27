#include <stdio.h>

int main(){

    int entered_pin;

    printf("--- SECURITY SYSTEM LOGIN ---\n");
    printf("Ener your 4-digit PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin == 1337){

	printf("[+] ACCESS GRANTED: Welcome back, Administrator.\n");
}
else{
	printf("[-] ACCESS DENIED: Intruder alert!\n");
}

    return 0;


}
