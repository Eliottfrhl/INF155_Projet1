/****************************************************************************************
    IMAGE_GRIS.C

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permettent de manipuler des images en niveaux de gris, leur appliquer
    des filtres de convolution, de leur appliquer un seuil et d'obtenir des informations.

 *****************************************************************************************/


#include "image_gris.h"
#include "../tableau/tableau2d.h"
#include "../tableau/tableau1d.h"

/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/

#define TAILLE_FILTRE 3 // La taille des filtres est toujours de 3x3

/****************************************************************************************
*                           D�CLARATION DES FONCTIONS PRIV�ES                           *
****************************************************************************************/

/*
NOM DE LA FONCTION : filtrer_pixel

DESCRIPTION :
    Cette fonction prend une sous-image en niveaux de gris et un filtre en entr�e et retourne la valeur du pixel filtr�.
    Pour filtrer un pixel, on se doit de calculer la convolution de ce pixel avec le filtre re�u.
    Lorsque l'on applique un filtre � un pixel, on vient centrer le filtre sur le pixel cibl�. Ce
    qui veut dire qu'une portion du filtre est sur les voisins du pixel cibl�. La convolution
    est simplement l'accumulation des produits entre le filtre et l'image. Le r�sultat de cette
    accumulation remplace le pixel dans l'image trait�e.

PARAM�TRES :
    - sous_image : une sous-image en niveaux de gris de type t_image_gris
    - filtre : un filtre de type t_filtre

VALEUR DE RETOUR : la valeur du pixel filtr� de type double
*/
double filtrer_pixel(t_image_gris sous_image, t_filtre filtre);

/****************************************************************************************
*                           D�FINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/

void negatif(t_image_gris image, int nb_lignes, int nb_colonnes){
    // On parcourt l'image
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            // On remplace chaque pixel par son n�gatif
            image[i][j] = 1 - image[i][j];
        }
    }
}

void seuiller(t_image_gris image, int nb_lignes, int nb_colonnes, double seuil){
    // On parcourt l'image
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            // On remplace chaque pixel par 0 ou 1 en fonction de l'ordre du seuil et de la valeur du pixel
            if(image[i][j] < seuil)
            {
                image[i][j] = 0;
            }
            else
            {
                image[i][j] = 1;
            }
        }
    }
}

double* histogramme(t_image_gris image, int nb_lignes, int nb_colonnes, int nb_categories){
    int categorie; //On cr�e une variable pour stocker la cat�gorie du pixel
    double *histogramme = creer_tableau1d(nb_categories); //On cr�e un tableau 1D de taille nb_categories
    // On initialise l'histogramme � 0
    for(int i = 0; i < nb_categories; i++)
    {
        histogramme[i] = 0;
    }
    // On parcourt l'image
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            // On incr�mente l'histogramme en fonction de la valeur du pixel
            categorie = (int)(image[i][j] * nb_categories);
            histogramme[categorie]++;
        }
    }
    return histogramme;
}

void filtrer(t_image_gris *image, int nb_lignes, int nb_colonnes, t_filtre filtre){
    t_image_gris nouvelle_image = creer_tableau2d(nb_lignes, nb_colonnes); //On cr�e une nouvelle image
    // On parcourt l'image
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            t_image_gris sous_image; //On cr�e une sous-image
            // On r�cup�re la sous-image centr�e sur le pixel et on lui applique le filtre
            sous_tableau(*image, nb_lignes, nb_colonnes, i, j, TAILLE_FILTRE, TAILLE_FILTRE, &sous_image);
            nouvelle_image[i][j] = filtrer_pixel(sous_image, filtre);
            // On lib�re la m�moire allou�e pour la sous-image
            detruire_tableau2d(&sous_image, TAILLE_FILTRE);
        }
    }
    // On lib�re la m�moire allou�e pour l'ancienne image et on remplace l'ancienne image par la nouvelle
    detruire_tableau2d(image, nb_lignes);
    *image = nouvelle_image;
}

/****************************************************************************************
*                           D�FINTION DES FONCTIONS PRIV�ES                             *
****************************************************************************************/

double filtrer_pixel(t_image_gris sous_image, t_filtre filtre){
    double **produit = creer_tableau2d(TAILLE_FILTRE, TAILLE_FILTRE); //On cr�e un tableau 2D pour
                                                                                          // stocker le produit
    // On calcule le produit entre la sous-image et le filtre
    produit_tableau2d(sous_image, filtre, TAILLE_FILTRE, TAILLE_FILTRE, &produit);
    double somme = somme_tableau2d(produit, TAILLE_FILTRE, TAILLE_FILTRE); //On calcule la
                                                                                                      // somme des �l�ments du produit
    return somme;
}