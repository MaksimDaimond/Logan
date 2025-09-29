#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main(int argc, char** argv) {
    char* str = (char*)malloc(sizeof(char) * SIZE);
    str = gets(str);
    printf("Привет, %s", str);
    return 0;
}
