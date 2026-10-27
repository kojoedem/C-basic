#include <stdio.h>

int main() {

    int entered_pin = 0;
    while (entered_pin != 1337){
        printf("\n---SYSTEM LOCKED ----\n");
        printf("Enter the correct 4-digit PIN to unlock: ");
        scanf("%d", &entered_pin);
        
        if (entered_pin != 1337){
            printf("[-] Wrong PIN Access Denied. Try again.\n");    
        }

    }

    printf("\n[+] Success: Correct PIN entered. System Unlocked!\n");
    return 0;

}
