//
// Created by frohl on 16/03/2024.
//

#ifndef PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
#define PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H

/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/

typedef struct {
    int rows; // Nombre de lignes du noyau
    int cols; // Nombre de colonnes du noyau
    double **data; // Tableau 2D dynamique contenant des nombres r�els
} t_filtre;

/****************************************************************************************
*                       D�CLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/

double** filtre_passe_haut();
double** filtre_passe_bas();
double** filtre_moyenneur();
double** filtre_laplacien();
void detruire_filtre(double ***filtre);

#endif //PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
