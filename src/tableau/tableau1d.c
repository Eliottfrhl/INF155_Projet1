/****************************************************************************************
    TABLEAU_1D.C

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de manipuler des tableaux 1D.


*****************************************************************************************/
#include "tableau1d.h"

#include <stdio.h>
#include <stdlib.h>



/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/



/****************************************************************************************
*                           DECLARATION DES FONCTIONS PRIVEES                           *
****************************************************************************************/



/****************************************************************************************
*                           DEFINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/

void afficher_tableau1d(double *tableau, int taille){
    for (int i = 0; i < taille; i++) {
        printf("%0.3lf ",tableau[i]);
    }
}


double somme_tableau1d(double *tableau, int taille){
    double somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}


double produit_tableau1d(double *tableau, int taille,double valeur){
        for (int i = 0; i < taille; i++) {
        tableau[i]= valeur*tableau[i];
        //printf("%0.3lf ",tableau[i]);
    }
    afficher_tableau1d(tableau,taille);
    return 0;
}

double produit_scalaire1d(double *tableau1, double *tableau2, int taille){
    double produit_scalaire = 0;
    for (int i = 0; i < taille; i++) {
        produit_scalaire += tableau1[i]*tableau2[i];
    }
    return produit_scalaire;
}

/*
NOM DE LA FONCTION : creer_tableau1d

DESCRIPTION: La fonction a pour but de creer un tableau d'une taille demandée dont tout les valeurs sont nuls

PARAMÈTRES : - taille: taille du tableau

VALEUR DE RETOUR : - tableau: Le tableau creer
*/
double* creer_tableau1d(int taille){
    double* tableau = (double*)calloc(taille, sizeof(double));
    for (int i = 0; i < taille; i++) {
        tableau[i]= 0;
    }
    return tableau;
}


void detruire_tableau1d(double **tableau){
    free(*tableau);
    // Mettre l'adresse du tableau à 0
    *tableau = 0;
}
/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
