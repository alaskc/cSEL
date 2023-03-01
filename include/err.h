#include <stdlib.h>
#include <stdio.h>

void ShowError(int exit_b,int exit_status,char* Message,char* Message_header) {
    printf("%s: %s\n" , Message_header,Message);

    if (exit_b) {
        exit(exit_status);
    }
}