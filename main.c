#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 14;
    int *p = &a;

    printf("Dir del puntero: %i\n", &p);
    printf("Dir a la que apunta: %i\n", p);
    printf("Contenido de lo que apunta: %i\n", *p);
    printf("Dir de a: %i\n", &a);
    printf("a: %i\n", a);
    
    return 0;
}
