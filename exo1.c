#include <stdio.h>
#include <stdlib.h>

int abs_first(int n);

void abs_second(int *n);

int main(void) {
    int n;

    printf("Saisissez un nombre : \n");
    scanf("%d", &n);
    //int p = abs_first(n);
    //printf("Avant abs_first : n = %d   Adresse de n = %p\n", n, &n);
    //printf("Après abs_first : p = %d   Adresse de p = %p\n", p, &p);
    
    
    printf("Avant abs_second : n = %d   Adresse de n = %p\n", n, &n);
    abs_second(&n);
    printf("Après abs_second : n = %d   Adresse de n = %p\n", n, &n);

    return 0;
}

int abs_first(int n){
    return (n < 0) ? n * (-1) : n;
}

void abs_second(int *n){
    if (*n < 0) (*n) = -(*n); 
    
}