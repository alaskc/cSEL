// Contains key data.

#include "c_header.h"
#include <string.h>

#define __KEY_PRIVATE_ sizeof(char*) + 24 / __componet_sel_header
#define __KEY_PUBLIC__ sizeof(char*) + 90 / __componet_sel_header

typedef struct __header_key_0 {
    int* i_key;
    int i_key_sum;
} PublicKey;

typedef struct __header_key_1 {
    int* i_key;
    int i_key_sum;
} PrivateKey;

void generateLocker(PrivateKey *p0,char *password) {
    int sum = 0;
    int size = strlen(password);

    for (int i = 0;i < size;i++) {}
}

void generatePublic(PrivateKey *p0 , PublicKey *p1) {

}
