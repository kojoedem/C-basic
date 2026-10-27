#include <stdio.h>

int main(){

    char target_name[] = "Kali";
    printf("The complete string is: %s\n", target_name);
    printf("the first letter (index 0) is: %c\n", target_name[0]);
    printf("The third letter (index 2) is: %c\n", target_name[2]);

    target_name[0] = 'M';


    printf("After changing index 0, the string is now: %s\n",target_name);
    return 0;


}
