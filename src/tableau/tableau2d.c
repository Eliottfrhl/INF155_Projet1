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
    double** tableau;   // On cr�e un pointeur vers un tableau 2D
    tableau = (double**)malloc(nb_lignes * sizeof(double*)); // On alloue la m�moire pour les lignes
    // On parcourt les lignes du tableau
    for(int i = 0; i < nb_lignes; i++)
    {
        // On alloue la m�moire pour les colonnes
        tableau[i]= (double*)malloc(nb_colonnes*sizeof(double));
        // On initialise les �l�ments du tableau � 0
        memset(tableau[i], 0, nb_colonnes*sizeof(double));
    }
    return tableau;
}


void detruire_tableau2d(double ***tableau, int nb_lignes){
    // On parcourt les lignes du tableau
    for (int i = 0; i < nb_lignes; i++) {
        // On lib�re la m�moire pour les colonnes
        free((*tableau)[i]);
    }
    // On lib�re la m�moire pour les lignes et on met le pointeur � 0
    free(*tableau);
    *tableau = 0;
}


void afficher_tableau2d(double **tableau, int nb_lignes, int nb_colonnes){
    // On parcourt le tableau
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            // On affiche l'�l�ment courant
            printf("%0.3lf ", tableau[i][j]);
        }
        printf("\n");
    }
}


void initialiser_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double valeur){
    // On parcourt le tableau
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            // On initialise l'�l�ment courant � la valeur donn�e
            tableau[i][j] = valeur;
        }
    }
}


double somme_tableau2d(double **tableau, int nb_lignes, int nb_colonnes){
    double somme = 0;  // On initialise la somme � 0
    // On parcourt le tableau
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            // On ajoute l'�l�ment courant � la somme
            somme += tableau[i][j];
        }
    }
    return somme;
}


void produit_par_scalaire2d(double **tableau, int nb_lignes, int nb_colonnes, double facteur){
    // On parcourt le tableau
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            // On multiplie l'�l�ment courant par le facteur
            tableau[i][j] *= facteur;
        }
    }
}


void puissance_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double puissance){
    // On parcourt le tableau
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            // On �l�ve l'�l�ment courant � la puissance
            tableau[i][j] = pow(tableau[i][j], puissance);
        }
    }
}


void produit_tableau2d(double **tableau1, double **tableau2, int nb_lignes, int nb_colonnes, double ***tableau_produit){
    // On cr�e le tableau produit
    *tableau_produit = creer_tableau2d(nb_lignes, nb_colonnes);
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            // On multiplie les �l�ments correspondants des deux tableaux
            (*tableau_produit)[i][j] = tableau1[i][j] * tableau2[i][j];
        }
    }
}


void somme_des_colonnes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme){
    *tableau_somme = (double*)malloc(nb_colonnes * sizeof(double)); // On alloue la m�moire pour le tableau somme
    // On parcourt les colonnes du tableau
    for (int i = 0; i < nb_colonnes; i++) {
        // On initialise l'�l�ment courant du tableau somme � 0
        (*tableau_somme)[i] = 0;
        for (int j = 0; j < nb_lignes; j++) {
            // On ajoute l'�l�ment courant du tableau � l'�l�ment courant du tableau somme
            (*tableau_somme)[i] += tableau[j][i];
        }
    }
}


void somme_des_lignes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme){
    *tableau_somme = (double*)malloc(nb_lignes * sizeof(double)); // On alloue la m�moire pour le tableau somme
    // On parcourt les lignes du tableau
    for (int i = 0; i < nb_lignes; i++) {
        // On initialise l'�l�ment courant du tableau somme � 0
        (*tableau_somme)[i] = 0;
        for (int j = 0; j < nb_colonnes; j++) {
            // On ajoute l'�l�ment courant du tableau � l'�l�ment courant du tableau somme
            (*tableau_somme)[i] += tableau[i][j];
        }
    }
}


void sous_tableau(double **tableau, int nb_lignes, int nb_colonnes, int ligne, int colonne, int nb_lignes_sous_tableau, int nb_colonnes_sous_tableau, double ***sous_tableau){
    // On cr�e le sous-tableau
    *sous_tableau = creer_tableau2d(nb_lignes_sous_tableau, nb_colonnes_sous_tableau);
    // On parcourt le sous-tableau
    for (int i = 0; i < nb_lignes_sous_tableau; i++) {
        for (int j = 0; j < nb_colonnes_sous_tableau; j++) {
            // On copie les �l�ments du tableau dans le sous-tableau s'ils existent, sinon on met 0
            if (ligne + i >= nb_lignes || colonne + j >= nb_colonnes) {
                (*sous_tableau)[i][j] = 0;
            } else {
                (*sous_tableau)[i][j] = tableau[ligne + i][colonne + j];
            }
        }
    }
}

/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
