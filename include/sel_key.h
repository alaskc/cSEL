#include "c_header.h"

#define __KEY_PRIVATE_ sizeof(char*) + 24 / __componet_sel_header
#define __KEY_PUBLIC__ sizeof(char*) + 27 / __componet_sel_header

typedef struct __header_key_0 {
    char* key;
} PublicKey;

typedef struct __header_key_1 {
    char* key;
} PrivateKey;

void generateLocker(PrivateKey *p0,char *password) {
    int sum = 0;
    char* data;
}

void generateUnlocker(PrivateKey *p0 , PublicKey *p1) {

}