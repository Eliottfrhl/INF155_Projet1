#include "tableau/tableau1d.h"
#include "tableau/tableau2d.h"
#include <stdio.h>

/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/

#define INIT_TAB_1(tab)  \
  tab[0][0] = 1,  \
  tab[0][1] = 2,  \
  tab[1][0] = 4,  \
  tab[1][1] = 5,  \
  tab[2][0] = 7,  \
  tab[2][1] = 8

#define INIT_TAB_2(tab) \
    tab[0][0] = 1.1,  \
    tab[0][1] = 2.1,  \
    tab[0][2] = 3.1,  \
    tab[0][3] = 0.25,  \
    tab[1][0] = 4.1,  \
    tab[1][1] = 5.1,  \
    tab[1][2] = 6.1,  \
    tab[1][3] = 0.33,  \
    tab[2][0] = 7.1,  \
    tab[2][1] = 8.1,  \
    tab[2][2] = 9.1,  \
    tab[2][3] = 0.80

#define INIT_TAB_3(tab) \
    tab[0][0] = 0.25,  \
    tab[0][1] = 0.50,  \
    tab[1][0] = 0.75,  \
    tab[1][1] = 1.0,  \
    tab[2][0] = 0.33,  \
    tab[2][1] = 0.66
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
    printf("\n\nFONCTION DETRUIRE TABLEAU : ");
    printf("\nT1 : %p", tableau_cree1);
    printf("\nT1 : %p\n\n", tableau_cree2);

}

void tester_tableau2d(void) {
    printf("*********************************************************\n");
    printf("*                     TEST TABLEAU2D                    *\n");
    printf("*********************************************************\n");

    double **tableau1 = creer_tableau2d(3, 2);
    double **tableau2 = creer_tableau2d(3, 4);
    double **tableau3 = creer_tableau2d(3, 2);

    INIT_TAB_1(tableau1);
    INIT_TAB_2(tableau2);
    INIT_TAB_3(tableau3);

    double **tableau4 = NULL;
    double *tableau5 = NULL;

    printf("\n\nFONCTION AFFICHER_TABLEAU2D : ");

    printf("\nT1 : \n");
    afficher_tableau2d(tableau1, 3, 2);
    printf("\nT2 : \n");
    afficher_tableau2d(tableau2, 3, 4);
    printf("\nT3 : \n");
    afficher_tableau2d(tableau3, 3, 2);

    printf("\n\nFONCTION INITIALISER_TABLEAU2D : ");
    printf("\nT1 : \n");
    initialiser_tableau2d(tableau2, 3, 4, 8);
    afficher_tableau2d(tableau2, 3, 4);

    INIT_TAB_2(tableau2);

    printf("\n\nFONCTION SOMME_TABLEAU2D : ");
    printf("\nT1 : %0.3lf", somme_tableau2d(tableau1, 3, 2));
    printf("\nT2 : %0.3lf", somme_tableau2d(tableau2, 3, 4));

    printf("\n\nFONCTION PRODUIT_PAR_SCALAIRE2D : ");
    printf("\nT1 : \n");
    produit_par_scalaire2d(tableau1, 3, 2, 0.1);
    afficher_tableau2d(tableau1, 3, 2);
    printf("\nT2 : \n");
    produit_par_scalaire2d(tableau2, 3, 4, 10);
    afficher_tableau2d(tableau2, 3, 4);

    INIT_TAB_2(tableau2);

    printf("\n\nFONCTION PUISSANCE_TABLEAU2D : ");
    printf("\nT1 : \n");
    puissance_tableau2d(tableau1, 3, 2, 2);
    afficher_tableau2d(tableau1, 3, 2);
    printf("\nT2 : \n");
    puissance_tableau2d(tableau2, 3, 4, 0.5);
    afficher_tableau2d(tableau2, 3, 4);

    INIT_TAB_1(tableau1);
    INIT_TAB_2(tableau2);

    printf("\n\nFONCTION PRODUIT_TABLEAU2D : ");
    printf("\nT1 : \n");
    produit_tableau2d(tableau1, tableau3, 3, 2, &tableau4);
    afficher_tableau2d(tableau4, 3, 2);
    detruire_tableau2d(&tableau4, 3);

    printf("\n\nFONCTION SOMME_DES_COLONNES : ");
    printf("\nT1 : \n");
    somme_des_colonnes(tableau2, 3, 4, &tableau5);
    afficher_tableau1d(tableau5, 4);
    detruire_tableau1d(&tableau5);

    printf("\n\nFONCTION SOMME_DES_LIGNES : ");
    printf("\nT1 : \n");
    somme_des_lignes(tableau2, 3, 4, &tableau5);
    afficher_tableau1d(tableau5, 3);
    detruire_tableau1d(&tableau5);

    printf("\n\nFONCTION SOUS_TABLEAU : ");
    printf("\nT1 : \n");
    sous_tableau(tableau2, 3, 4, 1, 0, 2, 3, &tableau4);
    afficher_tableau2d(tableau4, 2, 3);
    detruire_tableau2d(&tableau4, 2);

    printf("\n\nFONCTION DETRUIRE_TABLEAU2D : ");
    detruire_tableau2d(&tableau1, 3);
    printf("\nT1 : %p", tableau1);
    detruire_tableau2d(&tableau2, 3);
    printf("\nT2 : %p", tableau2);
    detruire_tableau2d(&tableau3, 3);
    printf("\nT3 : %p\n\n", tableau3);
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