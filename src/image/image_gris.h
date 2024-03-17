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

#include "noyau_filtre.h"

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

typedef double** t_image_gris;

/****************************************************************************************
*                           DÉCLARATION DES FONCTIONS PUBLIQUES                         *
****************************************************************************************/
/*
NOM DE LA FONCTION : negatif

DESCRIPTION :

PARAMÈTRES :
    - image :
    - nb_lignes :
    - nb_colonnes :

VALEUR DE RETOUR : aucune
*/
void negatif(t_image_gris image, int nb_lignes, int nb_colonnes);

/*
NOM DE LA FONCTION : seuiller

DESCRIPTION :

PARAMÈTRES :
    - image :
    - nb_lignes :
    - nb_colonnes :
    - seuil :

VALEUR DE RETOUR : aucune
*/
void seuiller(t_image_gris image, int nb_lignes, int nb_colonnes, double seuil);

/*
NOM DE LA FONCTION : histogramme

DESCRIPTION :

PARAMÈTRES :
    - image :
    - nb_lignes :
    - nb_colonnes :
    - nb_categories :


VALEUR DE RETOUR : histogramme
*/
double* histogramme(t_image_gris image, int nb_lignes, int nb_colonnes, int nb_categories);

/*
NOM DE LA FONCTION : filtrer

DESCRIPTION :

PARAMÈTRES :
    - image :
    - nb_lignes :
    - nb_colonnes :
    - filtre :

VALEUR DE RETOUR : aucune
*/
void filtrer(t_image_gris *image, int nb_lignes, int nb_colonnes, t_filtre filtre);


#endif //PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
