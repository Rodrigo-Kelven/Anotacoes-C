#include <stdio.h>

int main(void) { 
    printf(" --- TIPO ---|--- BYTES ---\n");
    printf("char .......: %zu bytes\n", sizeof(char));
    printf("int ........: %zu bytes\n", sizeof(int));
    printf("float ......: %zu bytes\n", sizeof(float));
    printf("double .....: %zu bytes\n", sizeof(double));
    printf("short ......: %zu bytes\n", sizeof(short));
    printf("long .......: %zu bytes\n", sizeof(long));
    printf("long long ..: %zu bytes\n", sizeof(long long));
    printf("unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("unsigned int : %zu bytes\n", sizeof(unsigned int));
    printf("unsigned long: %zu bytes\n", sizeof(unsigned long));
    printf("unsigned long long: %zu bytes\n", sizeof(unsigned long long));
    
    return 0; 
}
