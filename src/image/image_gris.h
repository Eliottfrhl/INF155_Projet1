/****************************************************************************************
    IMAGE_GRIS.H

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permettent de manipuler des images en niveaux de gris, leur appliquer
    des filtres de convolution, de leur appliquer un seuil et d'obtenir des informations.

    Liste des sous-programmes :
    - negatif : transforme une image en son n�gatif
    - seuiller : applique un seuil � une image
    - histogramme : calcule l'histogramme d'une image
    - filtrer : applique un filtre donn� � une image


 *****************************************************************************************/
#ifndef PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
#define PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H

#include "noyau_filtre.h"

/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/

typedef double** t_image_gris;

/****************************************************************************************
*                           D�CLARATION DES FONCTIONS PUBLIQUES                         *
****************************************************************************************/
/*
NOM DE LA FONCTION : negatif

DESCRIPTION :
 Cette fonction prend une image en niveaux de gris et ses dimensions en entr�e et transforme l'image en son n�gatif.
 Le n�gatif d'une image est cr�� en soustrayant la valeur de chaque pixel de la valeur maximale possible d'un pixel.

PARAM�TRES :
    - image de type t_image_gris qui est un tableau 2D de double repr�sentant les pixels de l'image
    - nb_lignes : le nombre de lignes de l'image de type int
    - nb_colonnes : le nombre de colonnes de l'image de type int

VALEUR DE RETOUR : aucune
*/
void negatif(t_image_gris image, int nb_lignes, int nb_colonnes);

/*
NOM DE LA FONCTION : seuiller

DESCRIPTION :
 Cette fonction applique une op�ration de seuillage � une image en niveaux de gris. Elle prend l'image, ses dimensions
 et une valeur de seuil en entr�e. Tous les pixels ayant une valeur sup�rieure au seuil sont fix�s � la valeur maximale
 du pixel, et tous les pixels ayant une valeur inf�rieure ou �gale au seuil sont fix�s � z�ro.

PARAM�TRES :
    - image de type t_image_gris qui est un tableau 2D de double repr�sentant les pixels de l'image
    - nb_lignes : le nombre de lignes de l'image de type int
    - nb_colonnes : le nombre de colonnes de l'image de type int
    - seuil : la valeur de seuil de type double

VALEUR DE RETOUR : aucune
*/
void seuiller(t_image_gris image, int nb_lignes, int nb_colonnes, double seuil);

/*
NOM DE LA FONCTION : histogramme

DESCRIPTION :
 Cette fonction calcule l'histogramme d'une image en niveaux de gris. Elle prend l'image, ses dimensions et le nombre
 de cat�gories (bins) pour l'histogramme en entr�e. L'histogramme est un tableau o� chaque �l�ment repr�sente le nombre
 de pixels de l'image qui tombent dans la cat�gorie correspondante.

PARAM�TRES :
    - image de type t_image_gris qui est un tableau 2D de double repr�sentant les pixels de l'image
    - nb_lignes : le nombre de lignes de l'image de type int
    - nb_colonnes : le nombre de colonnes de l'image de type int
    - nb_categories : le nombre de cat�gories pour l'histogramme de type int


VALEUR DE RETOUR : histogramme
*/
double* histogramme(t_image_gris image, int nb_lignes, int nb_colonnes, int nb_categories);

/*
NOM DE LA FONCTION : filtrer

DESCRIPTION :
 Cette fonction applique un filtre � une image en niveaux de gris. Elle prend un pointeur vers l'image, ses dimensions
 et un filtre en entr�e. Le filtre est appliqu� � chaque pixel de l'image, en prenant une somme pond�r�e du
 pixel et de ses voisins. Le r�sultat est une nouvelle image o� la valeur de chaque pixel est le r�sultat de l'op�ration
 de filtrage.

PARAM�TRES :
    - image de type t_image_gris qui est un tableau 2D de double repr�sentant les pixels de l'image
    - nb_lignes : le nombre de lignes de l'image de type int
    - nb_colonnes : le nombre de colonnes de l'image de type int
    - filtre : un filtre de type t_filtre � appliquer � l'image

VALEUR DE RETOUR : aucune
*/
void filtrer(t_image_gris *image, int nb_lignes, int nb_colonnes, t_filtre filtre);


#endif //PROJET1_LIBRAIREIMAGE_IMAGE_GRIS_H
