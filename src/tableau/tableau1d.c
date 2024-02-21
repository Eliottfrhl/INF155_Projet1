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

PARAMÈTRES : - tableau : Un tableau à une dimension à analyser.
             - taille : taille du tableau

VALEUR DE RETOUR : aucune
*/

void afficher_tableau1d(double *tableau, int taille){
    printf("%0.3lf %0.3lf %0.3lf %0.3lf %0.3lf",tableau[0],tableau[1],tableau[2],tableau[3],tableau[4]);

}








/*
NOM DE LA FONCTION : somme_tableau1d

DESCRIPTION

PARAMÈTRES : - tableau : Un tableau à une dimension à analyser.
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

DESCRIPTION: L'objectif de cette fonction est de faire le produit

PARAMÈTRES :

VALEUR DE RETOUR :
*/

double produit_tableau1d(double *tableau, int taille,double valeur){
        for (int i = 0; i < taille; i++) {
        tableau[i]= valeur*tableau[i];
        printf("%0.3lf ",tableau[i]);
    }
    return 0;
}



double produit_scalaire1D(double *tableau1, double *tableau2, int taille){

}

double* creer_tableau1d(int taille){

}
/*
NOM DE LA FONCTION :

DESCRIPTION

PARAMÈTRES :

VALEUR DE RETOUR :
*/
void detruire_tableau1d(double **tableau){

}
/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
