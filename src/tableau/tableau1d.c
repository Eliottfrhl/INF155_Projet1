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
    // On parcourt le tableau
    for (int i = 0; i < taille; i++) {
        // On affiche l'�l�ment courant
        printf("%0.3lf ",tableau[i]);
    }
}


double somme_tableau1d(double *tableau, int taille){
    double somme = 0;  // On initialise la somme � 0
    // On parcourt le tableau
    for (int i = 0; i < taille; i++) {
        // On ajoute l'�l�ment courant � la somme
        somme += tableau[i];
    }
    return somme;
}


void produit_tableau1d(double *tableau, int taille,double valeur){
    // On parcourt le tableau
    for (int i = 0; i < taille; i++) {
        // On multiplie l'�l�ment courant par la valeur
        tableau[i]= valeur*tableau[i];
    }
}

double produit_scalaire1d(double *tableau1, double *tableau2, int taille){
    double produit_scalaire = 0;    // On initialise le produit scalaire � 0
    // On parcourt les tableaux
    for (int i = 0; i < taille; i++) {
        // On ajoute le produit des �l�ments courants au produit scalaire
        produit_scalaire += tableau1[i]*tableau2[i];
    }
    return produit_scalaire;
}


double* creer_tableau1d(int taille){
    double* tableau = (double*)calloc(taille, sizeof(double)); // On alloue la m�moire pour le tableau
    // On parcourt le tableau
    for (int i = 0; i < taille; i++) {
        // On initialise l'�l�ment courant � 0
        tableau[i]= 0;
    }
    return tableau;
}


void detruire_tableau1d(double **tableau){
    // On lib�re la m�moire allou�e pour le tableau
    free(*tableau);
    // On met le pointeur � NULL
    *tableau = 0;
}
/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
