//
// Created by frohl on 16/03/2024.
//

#ifndef PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
#define PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

typedef struct {
    int rows; // Nombre de lignes du noyau
    int cols; // Nombre de colonnes du noyau
    double **data; // Tableau 2D dynamique contenant des nombres réels
} t_filtre;

/****************************************************************************************
*                           DÉCLARATION DES FONCTIONS PRIVÉES                           *
****************************************************************************************/

void negatif(double **image, int nb_lignes, int nb_colonnes);
void seuiller(double **image, int nb_lignes, int nb_colonnes, double seuil);
double* histogramme(double **image, int nb_lignes, int nb_colonnes, int nb_categories);
void filtrer(double ***image, int nb_lignes, int nb_colonnes, double **filtre);

/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/

/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PRIVÉES                             *
****************************************************************************************/

#endif //PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
