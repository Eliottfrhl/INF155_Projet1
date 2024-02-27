/****************************************************************************************
    TABLEAU_2D

*****************************************************************************************/
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

/*
NOM DE LA FONCTION : creer_tableau2d

DESCRIPTION : Cr�e un tableau 2d


PARAM�TRES :
    - nb_lignes : nombre de lignes
    - nb_colonnes : nombre de colonnes

VALEUR DE RETOUR :
    - tableau : un tableau 2d
*/
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

/*
 * NOM DE LA FONCTION : detruire_tableau2d
 *
 * DESCRIPTION : lib�re la m�moire allou�e pour le tableau 2d colonne par colonne
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d (donc **tableau pour le passage par adresse)
 *     - nb_lignes : nombre de lignes
 */
void detruire_tableau2d(double ***tableau, int nb_lignes){
    for (int i = 0; i < nb_lignes; i++) {
        free((*tableau)[i]);
    }
    free(*tableau);
    *tableau = 0;
}

/*
 * NOM DE LA FONCTION : afficher_tableau2d
 *
 * DESCRIPTION : affiche un tableau 2d
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 */
void afficher_tableau2d(double **tableau, int nb_lignes, int nb_colonnes){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            printf("%0.3lf ", tableau[i][j]);
        }
        printf("\n");
    }
}

/*
 * NOM DE LA FONCTION : initialiser_tableau2d
 *
 * DESCRIPTION : initialise un tableau 2d avec une valeur donn�e
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - valeur : valeur d'initialisation
 */
void initialiser_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double valeur){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            tableau[i][j] = valeur;
        }
    }
}

/*
 * NOM DE LA FONCTION : somme_tableau2d
 *
 * DESCRIPTION : calcule la somme des �l�ments d'un tableau 2d
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *
 * VALEUR DE RETOUR :
 *     - somme : la somme des �l�ments du tableau
 */
double somme_tableau2d(double **tableau, int nb_lignes, int nb_colonnes){
    double somme = 0;
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            somme += tableau[i][j];
        }
    }
    return somme;
}

/*
 * NOM DE LA FONCTION : produit_par_scalaire2d
 *
 * DESCRIPTION : multiplie chaque �l�ment d'un tableau 2d par un facteur
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - facteur : le facteur de multiplication
 *
 * VALEUR DE RETOUR : aucune
 */
void produit_par_scalaire2d(double **tableau, int nb_lignes, int nb_colonnes, double facteur){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            tableau[i][j] *= facteur;
        }
    }
}

/*
 * NOM DE LA FONCTION : puissance_tableau2d
 *
 * DESCRIPTION : �l�ve chaque �l�ment d'un tableau 2d � une puissance donn�e
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - puissance : la puissance
 *
 * VALEUR DE RETOUR : aucune
 */
void puissance_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double puissance){
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            tableau[i][j] = pow(tableau[i][j], puissance);
        }
    }
}

/*
 * NOM DE LA FONCTION : produit_tableau2d
 *
 * DESCRIPTION : multiplie deux tableaux 2d terme � terme
 *
 * PARAM�TRES :
 *     - tableau1 : un tableau 2d
 *     - tableau2 : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - tableau_produit : un pointeur vers un tableau 2d pour stocker le produit
 *
 * VALEUR DE RETOUR : aucune
 */
void produit_tableau2d(double **tableau1, double **tableau2, int nb_lignes, int nb_colonnes, double ***tableau_produit){
    *tableau_produit = creer_tableau2d(nb_lignes, nb_colonnes);
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            (*tableau_produit)[i][j] = tableau1[i][j] * tableau2[i][j];
        }
    }
}

/*
 * NOM DE LA FONCTION : somme_des_colonnes
 *
 * DESCRIPTION : calcule la somme des colonnes d'un tableau 2d
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - tableau_somme : un pointeur vers un tableau 1d pour stocker les sommes des colonnes
 *
 * VALEUR DE RETOUR : aucune
 */
void somme_des_colonnes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme){
    *tableau_somme = (double*)malloc(nb_colonnes * sizeof(double));
    for (int i = 0; i < nb_colonnes; i++) {
        (*tableau_somme)[i] = 0;
        for (int j = 0; j < nb_lignes; j++) {
            (*tableau_somme)[i] += tableau[j][i];
        }
    }
}

/*
 * NOM DE LA FONCTION : somme_des_lignes
 *
 * DESCRIPTION : calcule la somme des lignes d'un tableau 2d
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - tableau_somme : un pointeur vers un tableau 1d pour stocker les sommes des lignes
 *
 * VALEUR DE RETOUR : aucune
 */
void somme_des_lignes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme){
    *tableau_somme = (double*)malloc(nb_lignes * sizeof(double));
    for (int i = 0; i < nb_lignes; i++) {
        (*tableau_somme)[i] = 0;
        for (int j = 0; j < nb_colonnes; j++) {
            (*tableau_somme)[i] += tableau[i][j];
        }
    }
}

/*
 * NOM DE LA FONCTION : sous_tableau
 *
 * DESCRIPTION : extrait un sous-tableau d'un tableau 2d
 *
 * PARAM�TRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - ligne : ligne de d�part du sous-tableau
 *     - colonne : colonne de d�part du sous-tableau
 *     - nb_lignes_sous_tableau : nombre de lignes du sous-tableau
 *     - nb_colonnes_sous_tableau : nombre de colonnes du sous-tableau
 *     - sous_tableau : un pointeur vers un tableau 2d pour stocker le sous-tableau
 *
 * VALEUR DE RETOUR : aucune
 */
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
