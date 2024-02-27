/****************************************************************************************
    TABLEAU_1D

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
/*
NOM DE LA FONCTION : afficher_tableau1d

DESCRIPTION: affiche le tableau 1d

PARAM�TRES : - tableau : Un tableau � une dimension � analyser.
             - taille : taille du tableau

VALEUR DE RETOUR : aucune
*/

void afficher_tableau1d(double *tableau, int taille){
    for (int i = 0; i < taille; i++) {
        printf("%0.3lf ",tableau[i]);
    }
}

/*
NOM DE LA FONCTION : somme_tableau1d

DESCRIPTION

PARAM�TRES : - tableau : Un tableau � une dimension � analyser.
             - taille : taille du tableau

VALEUR DE RETOUR :
*/
double somme_tableau1d(double *tableau, int taille){
    double somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}

/*
NOM DE LA FONCTION : produit_tableau1d

DESCRIPTION: L'objectif de cette fonction est de multiplier la valeur de chaque case du tableau par la valeur recu.

PARAM�TRES : - tableau : Un tableau � une dimension � analyser.
             - taille : taille du tableau
             - valeur : la valeur utiliser pour la multiplication


VALEUR DE RETOUR : aucune
*/

double produit_tableau1d(double *tableau, int taille,double valeur){
        for (int i = 0; i < taille; i++) {
        tableau[i]= valeur*tableau[i];
        //printf("%0.3lf ",tableau[i]);
    }
    afficher_tableau1d(tableau,taille);
    return 0;
}
/*
NOM DE LA FONCTION :

DESCRIPTION

PARAM�TRES :

VALEUR DE RETOUR :
*/

double produit_scalaire1D(double *tableau1, double *tableau2, int taille){
    double produit_scalaire = 0;
    for (int i = 0; i < taille; i++) {
        produit_scalaire += tableau1[i]*tableau2[i];
    }
    return produit_scalaire;
}

/*
NOM DE LA FONCTION : creer_tableau1d

DESCRIPTION: La fonction a pour but de creer un tableau d'une taille demand�e dont tout les valeurs sont nuls

PARAM�TRES : - taille: taille du tableau

VALEUR DE RETOUR :
*/
double* creer_tableau1d(int taille){
    double* tableau = (double*)calloc(taille, sizeof(double));
    for (int i = 0; i < taille; i++) {
        tableau[i]= 0;
    }
    return tableau;
    /*
    double * tableau_cree[taille];
    for (int i = 0; i < taille; i++) {
        tableau_cree[i]= 0;
    }
    return tableau_cree[taille];
     */
}
/*
NOM DE LA FONCTION : detruire_tableau1d

DESCRIPTION : La fonction a pour but de lib�rer la m�moire allou�e pour le tableau


PARAM�TRES :
    - tableau : l'adresse du tableau � une dimension � analyser.

VALEUR DE RETOUR :
*/
void detruire_tableau1d(double **tableau){
    free(*tableau);
    // Mettre l'adresse du tableau � 0
    *tableau = 0;
}
/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
