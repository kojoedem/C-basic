#include <stdio.h>

int main(){

    int network_ports[5] = {21,22,80,443,8080};
    printf("--- READING THE ARRAY ELEMENTS ---\n");

    for (int i=0; i<5; i++){
        printf("Index [%d] stores network port: %d\n", i, network_ports[i]);

    }
    return 0;

}
