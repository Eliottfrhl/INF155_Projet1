/****************************************************************************************
    TABLEAU_1D

*****************************************************************************************/
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
NOM DE LA FONCTION 1 : afficher tableau

DESCRIPTION

PARAMÈTRES :

VALEUR DE RETOUR :
*/
void afficher_tableau1d(double *tableau, int taille){

}
/*
NOM DE LA FONCTION 2 : somme_tableau1d

DESCRIPTION

PARAMÈTRES : - tableau : Un tableau à une dimension à analyser.
             - taille : taille du tableau

VALEUR DE RETOUR :
*/
double somme_tableau1d( double *tableau, int taille){
    double somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}

/*
NOM DE LA FONCTION 3 : produit_tableau1d

DESCRIPTION :
    Cette fonction multiplie chaque élément d'un tableau à une dimension par un facteur.

PARAMÈTRES :
    - tableau : Un tableau à une dimension à analyser.
    - taille : taille du tableau d'entrée
    - facteur : Le facteur par lequel chaque élément du tableau sera multiplié.

VALEUR DE RETOUR :
    Aucune.
*/
void produit_tableau1d(double *tableau, int taille,double facteur){
    for (int i = 0; i < taille; i++) {
        tableau[i] *= facteur;
    }
}

/*
NOM DE LA FONCTION 4 : produit_tableau1d

DESCRIPTION

PARAMÈTRES :

VALEUR DE RETOUR :
*/
double produit_scalaire1D(double *tableau1, double *tableau2, int taille){

}
/*
NOM DE LA FONCTION 5 :

DESCRIPTION

PARAMÈTRES :

VALEUR DE RETOUR :
*/
double* creer_tableau1d(int taille){

}
/*
NOM DE LA FONCTION 6 : detruire_tableau1d

DESCRIPTION :
    Cette fonction libère la mémoire allouée pour un tableau à une dimension
    et remplace l'adresse du tableau par 0.

PARAMÈTRES :
    - tableau : Un pointeur vers un tableau à une dimension.

VALEUR DE RETOUR :
    Aucune.
*/
void detruire_tableau1d(double **tableau){
    free(*tableau);
    *tableau = 0;
}
/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
