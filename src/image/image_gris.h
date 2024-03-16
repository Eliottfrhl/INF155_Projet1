/****************************************************************************************
    IMAGE_GRIS.H

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de ??????????????????.

    Liste des sous-programmes :
    - negatif :
    - seuiller :
    - histogramme :
    - filtrer :


 *****************************************************************************************/
#ifndef PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
#define PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H

/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/

typedef struct {
    int rows; // Nombre de lignes du noyau
    int cols; // Nombre de colonnes du noyau
    double **data; // Tableau 2D dynamique contenant des nombres r�els
} t_image_gris;

/****************************************************************************************
*                           D�CLARATION DES FONCTIONS PRIV�ES                           *
****************************************************************************************/
/*
NOM DE LA FONCTION : negatif

DESCRIPTION :

PARAM�TRES :
    - image :
    - nb_lignes :
    - nb_colonnes :

VALEUR DE RETOUR : aucune
*/
void negatif(double **image, int nb_lignes, int nb_colonnes);

/*
NOM DE LA FONCTION : seuiller

DESCRIPTION :

PARAM�TRES :
    - image :
    - nb_lignes :
    - nb_colonnes :
    - seuil :

VALEUR DE RETOUR : aucune
*/
void seuiller(double **image, int nb_lignes, int nb_colonnes, double seuil);

/*
NOM DE LA FONCTION : histogramme

DESCRIPTION :

PARAM�TRES :
    - image :
    - nb_lignes :
    - nb_colonnes :
    - nb_categories :


VALEUR DE RETOUR : histogramme
*/
double* histogramme(double **image, int nb_lignes, int nb_colonnes, int nb_categories);

/*
NOM DE LA FONCTION : filtrer

DESCRIPTION :

PARAM�TRES :
    - image :
    - nb_lignes :
    - nb_colonnes :
    - filtre :

VALEUR DE RETOUR : aucune
*/
void filtrer(double ***image, int nb_lignes, int nb_colonnes, double **filtre);

/****************************************************************************************
*                           D�FINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/

/****************************************************************************************
*                           D�FINTION DES FONCTIONS PRIV�ES                             *
****************************************************************************************/

#endif //PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
