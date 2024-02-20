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

PARAM�TRES :

VALEUR DE RETOUR :
*/
void afficher_tableau1d(double *tableau, int taille){

}
/*
NOM DE LA FONCTION 2 : somme_tableau1d

DESCRIPTION

PARAM�TRES : - tableau : Un tableau � une dimension � analyser.
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
    Cette fonction multiplie chaque �l�ment d'un tableau � une dimension par un facteur.

PARAM�TRES :
    - tableau : Un tableau � une dimension � analyser.
    - taille : taille du tableau d'entr�e
    - facteur : Le facteur par lequel chaque �l�ment du tableau sera multipli�.

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

PARAM�TRES :

VALEUR DE RETOUR :
*/
double produit_scalaire1D(double *tableau1, double *tableau2, int taille){

}
/*
NOM DE LA FONCTION 5 :

DESCRIPTION

PARAM�TRES :

VALEUR DE RETOUR :
*/
double* creer_tableau1d(int taille){

}
/*
NOM DE LA FONCTION 6 : detruire_tableau1d

DESCRIPTION :
    Cette fonction lib�re la m�moire allou�e pour un tableau � une dimension
    et remplace l'adresse du tableau par 0.

PARAM�TRES :
    - tableau : Un pointeur vers un tableau � une dimension.

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
