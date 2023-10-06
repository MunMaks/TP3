#include <stdio.h>
#include <math.h>

void afficheTab(int tab[], int taille);

void changeTab(int tab[], int taille, int indice);

void afficheTab_adr(int tab[], int taille);

int main(void){
    int taille = 5;
    int tab[5] = {1, 2, 3, 4, 5};

    afficheTab(tab, taille);
    changeTab(tab, taille, 3);
    afficheTab(tab, taille);

    //printf("Dans main: \ntab: %p\n&tab[0]:%p\n", tab, &(tab[0]));
    printf("\n");
    afficheTab_adr(tab, taille);
    printf("\n");
    

    return 0;
}


void afficheTab(int tab[], int taille){
    
    for (int i = 0; i < taille; ++i)
        printf("%d ", tab[i]);
    
    printf("\n");
}

void changeTab(int tab[], int taille, int indice){
    tab[indice] = 2;
    printf("Dans changeTab:\n");
    printf("tab: %p, &tab[0]:%p\n", tab, &(tab[0]));
}

void afficheTab_adr(int tab[], int taille){
    for (int i = 0; i < taille; ++i)
        printf("%p\n", &(tab[i]));
    printf("\n");
}