#include "tableau/tableau1d.h"
#include <stdio.h>

/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/

/****************************************************************************************
*                           DECLARATION DES FONCTIONS PRIVEES                           *
****************************************************************************************/

static void tester_tableau1d(void);
static void tester_tableau2d(void);
static void tester_noyau(void);
static void tester_image_gris(void);

int main() {
    tester_tableau1d();
    tester_tableau2d();
    tester_noyau();
    tester_image_gris();
    return 0;
}

/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/

void tester_tableau1d(void) {
    printf("*********************************************************\n");
    printf("*                     TEST TABLEAU1D                    *\n");
    printf("*********************************************************\n");
}

void tester_tableau2d(void) {
    printf("*********************************************************\n");
    printf("*                     TEST TABLEAU2D                    *\n");
    printf("*********************************************************\n");
}

void tester_noyau(void) {
    printf("*********************************************************\n");
    printf("*                     TEST NOYAU                        *\n");
    printf("*********************************************************\n");
}

void tester_image_gris(void) {
    printf("*********************************************************\n");
    printf("*                     TEST IMAGE GRIS                   *\n");
    printf("*********************************************************\n");
}