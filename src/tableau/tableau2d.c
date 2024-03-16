/****************************************************************************************
    TABLEAU2D.C

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de manipuler des tableaux 2D.

****************************************************************************************/

#include "tableau2d.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/



/****************************************************************************************
*                           DECLARATION DES FONCTIONS PRIVEES                           *
****************************************************************************************/



/****************************************************************************************
*                           DEFINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/


double** creer_tableau2d(int nb_lignes, int nb_colonnes){
    double** tableau;
    tableau = (double**)malloc(nb_lignes * sizeof(double*));
    for(int i = 0; i < nb_lignes; i++)
    {
        tableau[i]= (double*)malloc(nb_colonnes*sizeof(double));
        memset(tableau[i], 0, nb_colonnes*sizeof(double));
    }
    return tableau;
}


void detruire_tableau2d(double ***tableau, int nb_lignes){
    for (int i = 0; i < nb_lignes; i++) {
        free((*tableau)[i]);
    }
    free(*tableau);
    *tableau = 0;
}


void afficher_tableau2d(double **tableau, int nb_lignes, int nb_colonnes){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            printf("%0.3lf ", tableau[i][j]);
        }
        printf("\n");
    }
}


void initialiser_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double valeur){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            tableau[i][j] = valeur;
        }
    }
}


double somme_tableau2d(double **tableau, int nb_lignes, int nb_colonnes){
    double somme = 0;
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            somme += tableau[i][j];
        }
    }
    return somme;
}


void produit_par_scalaire2d(double **tableau, int nb_lignes, int nb_colonnes, double facteur){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            tableau[i][j] *= facteur;
        }
    }
}


void puissance_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double puissance){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            tableau[i][j] = pow(tableau[i][j], puissance);
        }
    }
}


void produit_tableau2d(double **tableau1, double **tableau2, int nb_lignes, int nb_colonnes, double ***tableau_produit){
    *tableau_produit = creer_tableau2d(nb_lignes, nb_colonnes);
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            (*tableau_produit)[i][j] = tableau1[i][j] * tableau2[i][j];
        }
    }
}


void somme_des_colonnes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme){
    *tableau_somme = (double*)malloc(nb_colonnes * sizeof(double));
    for (int i = 0; i < nb_colonnes; i++) {
        (*tableau_somme)[i] = 0;
        for (int j = 0; j < nb_lignes; j++) {
            (*tableau_somme)[i] += tableau[j][i];
        }
    }
}


void somme_des_lignes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme){
    *tableau_somme = (double*)malloc(nb_lignes * sizeof(double));
    for (int i = 0; i < nb_lignes; i++) {
        (*tableau_somme)[i] = 0;
        for (int j = 0; j < nb_colonnes; j++) {
            (*tableau_somme)[i] += tableau[i][j];
        }
    }
}


void sous_tableau(double **tableau, int nb_lignes, int nb_colonnes, int ligne, int colonne, int nb_lignes_sous_tableau, int nb_colonnes_sous_tableau, double ***sous_tableau){
    *sous_tableau = creer_tableau2d(nb_lignes_sous_tableau, nb_colonnes_sous_tableau);
    for (int i = 0; i < nb_lignes_sous_tableau; i++) {
        for (int j = 0; j < nb_colonnes_sous_tableau; j++) {
            (*sous_tableau)[i][j] = tableau[ligne + i][colonne + j];
        }
    }
}

/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
