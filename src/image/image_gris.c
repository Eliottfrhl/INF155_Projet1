/****************************************************************************************
    IMAGE_GRIS.C

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de ??????????????????.


 *****************************************************************************************/


#include <stdlib.h>
#include "image_gris.h"
#include "noyau_filtre.h"
#include "../tableau/tableau2d.h"
#include "../tableau/tableau1d.h"

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

#define TAILLE_FILTRE 3

/****************************************************************************************
*                           DÉCLARATION DES FONCTIONS PRIVÉES                           *
****************************************************************************************/

double filtrer_pixel(t_image_gris sous_image, t_filtre filtre);

/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/

void negatif(t_image_gris image, int nb_lignes, int nb_colonnes){
    // On parcourt l'image
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            // On remplace chaque pixel par son négatif
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
    int categorie; //On crée une variable pour stocker la catégorie du pixel
    double *histogramme = creer_tableau1d(nb_categories); //On crée un tableau 1D de taille nb_categories
    // On initialise l'histogramme à 0
    for(int i = 0; i < nb_categories; i++)
    {
        histogramme[i] = 0;
    }
    // On parcourt l'image
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            // On incrémente l'histogramme en fonction de la valeur du pixel
            categorie = (int)(image[i][j] * nb_categories);
            histogramme[categorie]++;
        }
    }
    return histogramme;
}

//Sous-programme : filtrer
//Entrée : Un pointeur vers une image en teinte de gris.
//Le nombre de ligne de cette image.
//Le nombre de colonne de cette image.
//Un filtre à appliquer sur l’image.
//Sortie : Aucune
//Requis 12 : On crée une nouvelle image possédant les mêmes dimensions que l’image original.
//Requis 13 : On utilise l’image originale pour calculer la valeur de chaque pixel filtré. La valeur des
//pixels filtrés sont enregistrés dans la nouvelle image.
//Requis 14 : On détruit l’image originale et on modifie le pointeur de manière à pointée sur la
//nouvelle image.
//Requis 15 : Faites une fonction privée qui permet de calculer la valeur filtrée d’un pixel. Pour filtrer
//un pixel, on se doit de calculer la convolution de ce pixel avec le filtre reçu.
//Requis 16 : Lorsque l'on applique un filtre à un pixel, on vient centrer le filtre sur le pixel ciblé. Ce
//qui veut dire qu'une portion du filtre est sur les voisins du pixel ciblé. La convolution
//est simplement l'accumulation des produits entre le filtre et l'image. Le résultat de cette
//accumulation remplace le pixel dans l'image traitée.
void filtrer(t_image_gris *image, int nb_lignes, int nb_colonnes, t_filtre filtre){
    t_image_gris nouvelle_image = creer_tableau2d(nb_lignes, nb_colonnes);
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            t_image_gris sous_image;
            sous_tableau(*image, nb_lignes, nb_colonnes, i, j, TAILLE_FILTRE, TAILLE_FILTRE, &sous_image);
            nouvelle_image[i][j] = filtrer_pixel(sous_image, filtre);
            detruire_tableau2d(&sous_image, TAILLE_FILTRE);
        }
    }
    detruire_tableau2d(image, nb_lignes);
    *image = nouvelle_image;
}

/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PRIVÉES                             *
****************************************************************************************/

//Faites une fonction privée qui permet de calculer la valeur filtrée d’un pixel. Pour filtrer
//un pixel, on se doit de calculer la convolution de ce pixel avec le filtre reçu.
//Requis 16 : Lorsque l'on applique un filtre à un pixel, on vient centrer le filtre sur le pixel ciblé. Ce
//qui veut dire qu'une portion du filtre est sur les voisins du pixel ciblé. La convolution
//est simplement l'accumulation des produits entre le filtre et l'image. Le résultat de cette
//accumulation remplace le pixel dans l'image traitée. Utilisez les fonctions sous-tableau, somme_tableau2d et produit-tableau2d pour simplifier votre code.
double filtrer_pixel(t_image_gris sous_image, t_filtre filtre){
    double **produit = creer_tableau2d(TAILLE_FILTRE, TAILLE_FILTRE);
    produit_tableau2d(sous_image, filtre, TAILLE_FILTRE, TAILLE_FILTRE, &produit);
    double somme = somme_tableau2d(produit, TAILLE_FILTRE, TAILLE_FILTRE);
    return somme;
}