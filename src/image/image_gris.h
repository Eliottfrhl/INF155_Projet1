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
 Cette fonction prend une image en niveaux de gris et ses dimensions en entrée et transforme l'image en son négatif.
 Le négatif d'une image est créé en soustrayant la valeur de chaque pixel de la valeur maximale possible d'un pixel.

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
 Cette fonction applique une opération de seuillage à une image en niveaux de gris. Elle prend l'image, ses dimensions
 et une valeur de seuil en entrée. Tous les pixels ayant une valeur supérieure au seuil sont fixés à la valeur maximale
 du pixel, et tous les pixels ayant une valeur inférieure ou égale au seuil sont fixés à zéro.

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
 Cette fonction calcule l'histogramme d'une image en niveaux de gris. Elle prend l'image, ses dimensions et le nombre
 de catégories (bins) pour l'histogramme en entrée. L'histogramme est un tableau où chaque élément représente le nombre
 de pixels de l'image qui tombent dans la catégorie correspondante.

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
 Cette fonction applique un filtre à une image en niveaux de gris. Elle prend un pointeur vers l'image, ses dimensions
 et un filtre en entrée. Le filtre est appliqué à chaque pixel de l'image, en prenant une somme pondérée du
 pixel et de ses voisins. Le résultat est une nouvelle image où la valeur de chaque pixel est le résultat de l'opération
 de filtrage.

PARAMÈTRES :
    - image :
    - nb_lignes :
    - nb_colonnes :
    - filtre :

VALEUR DE RETOUR : aucune
*/
void filtrer(t_image_gris *image, int nb_lignes, int nb_colonnes, t_filtre filtre);


#endif //PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
