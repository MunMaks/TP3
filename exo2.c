#include <stdio.h>
#include <math.h>

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * */
/* BUT : resoudre une equation du second degre                            */
/* PARAM : 3 valeurs float, qui sont les coefficients de l'equation       */
/*         2 adresses de float, qui stockeront les solutions possibles    */
/* RETOUR : un entier, qui sera le nombre de solutions                    */
/*          Plus precisemment :                                           */
/*                  -1, s'il y a une infinite de solutions                */
/*                  0, s'il n'y a pas de solution                         */
/*                  1, s'il y a une racine                                */
/*                  2, s'il y a deux racines distinctes                   */
/* EFFETS DE BORDS : S'il y a 1 solution, elle sera place a l'adresse de x*/
/*                   S'il y a 2 solutions, elles seront placees           */
/*                   aux adresses de x et y                               */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * */

int resoudre(int a, int b, int c, float *x, float *y);


int main(void){
    float r_un, r_deux;
    int a = 0, b = 0, c = 0;
    scanf(" %d ", &a);
    scanf(" %d ", &b);
    scanf(" %d ", &c);
    int res = resoudre(a, b, c, &r_un, &r_deux);
    switch (res){
        case 0: printf("0 solution\n"); break;
        case 1: printf("1 solution: %f\n", r_un); break;
        case 2: printf("2 solutions: %f, %f\n", r_un, r_deux); break;
        case -1: printf("Infinité de solutions\n"); break;
    }
    return 0;
}


int resoudre(int a, int b, int c, float *x, float *y){
    double delta = 0.0;

    if (!a){
        if (!b) {
            if (!c) return -1;  // inf solution
            
            else return 0;      // 0 solutions
        }
        else {
            *x = - ((float) c) / b; 
            return 1;
        }
    }
    delta = (b * b) - (4 * a * c);
    // printf("delta: %f\n",delta);
    if (delta < 0)  return 0;   // if delta < 0

    else if (!delta) {  // if delta == 0
        *x = (-b) / (2 * a);
        return 1;
    }

    else {  // if delta > 0
        *x = (-b) - (sqrt(delta) / (2 * a));
        *y = (-b) + (sqrt(delta) / (2 * a));
        return 2;
    }
}