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
    double tableau1[5] = {1, 2, 3, 4, 5};
    double tableau2[5] = {1.1, 2.5, 3.0, 4.25, 5.123};
    double tableau3[5] = {1.0, 1.0, 1.0, 1.0, 1.0};
    double tableau4[5] = {1, 2, 3, 4, 5};
    double tableau5[5] = {1.5, 2.0, 1.25, 0.5};
    double tableau6[5] = {0};

    printf("*********************************************************\n");
    printf("*                     TEST TABLEAU1D                    *\n");
    printf("*********************************************************\n");


    printf("\nFONCTION AFFICHER_TABLEAU1D : ");
    printf("\nT1 : ");
    afficher_tableau1d(tableau1, 5);
    printf("\nT2 : ");
    afficher_tableau1d(tableau2, 5);
    printf("\nT3 : ");
    afficher_tableau1d(tableau5, 3);

    printf("\n\nFONCTION SOMME : ");
    printf("\nT1 : %0.3lf", somme_tableau1d(tableau1, 5));
    printf("\nT2 : %0.3lf", somme_tableau1d(tableau2, 5));
    printf("\nT3 : %0.3lf", somme_tableau1d(tableau2, 0));

    printf("\n\nFONCTION PRODUIT : ");
    printf("\nT1 : ");
    produit_tableau1d(tableau1, 5, 5);
    printf("\nT2 : ");
    produit_tableau1d(tableau2, 5,0.1);
    printf("\nT3 : ");
    produit_tableau1d(tableau3, 3, 0);


    printf("\n\nFONCTION PRODUIT SCALAIRE : ");
    printf("\nT1 : %0.3lf", produit_scalaire1D(tableau4, tableau5, 5));
    printf("\nT2 : %0.3lf", produit_scalaire1D(tableau4, tableau6, 5));



    printf("\n\nFONCTION CREER TABLEAU : ");
    printf("\nT1 : ");
    double* tableau_cree1 = creer_tableau1d(5);
    afficher_tableau1d(tableau_cree1,5);
    printf("\nT2 : ");
    double* tableau_cree2 = creer_tableau1d(3);
    afficher_tableau1d(tableau_cree2,3);


    detruire_tableau1d(&tableau_cree1);
    detruire_tableau1d(&tableau_cree2);
    printf("\nFONCTION DETRUIRE TABLEAU : ");
    printf("\nT1 : %p", tableau_cree1);
    printf("\nT1 : %p\n\n", tableau_cree2);

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