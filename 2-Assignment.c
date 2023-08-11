
#include <stdio.h>
// #include <stdlib.h> or #define EXIT_SUCCESS 0, will both define return macro

int main(){
    int a=5;
    float b = 3.14f;
    char* c = "Hello World!";
    printf("%d is an integer\n", a);
    printf("%f is a float\n", b);
    printf("%s is an char array", c);
    return 0;
    // return EXIT_SUCCESS;
}