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

/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/

/****************************************************************************************
*                           D�CLARATION DES FONCTIONS PRIV�ES                           *
****************************************************************************************/

void filtrer_pixel(double **image, int nb_lignes, int nb_colonnes, double **filtre, int i, int j, double **nouvelle_image);

/****************************************************************************************
*                           D�FINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/

//Sous-programme : negatif
//Entr�e : Une image en teinte de gris.
//Le nombre de ligne de cette image.
//Le nombre de colonne de cette image.
//Sortie : Aucune
//Requis 5 : La fonction remplace tous les pixels de l�image re�ue par le n�gatif de ces pixels. On
//calcule le n�gatif d�un pixel avec la formule : 1? ??????_?????.
void negatif(double **image, int nb_lignes, int nb_colonnes)
{
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            image[i][j] = 1 - image[i][j];
        }
    }
}
//Sous-programme : seuiller
//Entr�e : Une image en teinte de gris.
//Le nombre de ligne de cette image.
//Le nombre de colonne de cette image.
//Un r�el repr�sentant un seuil
//Sortie : Aucune
//Requis 6 : La fonction remplace tous les pixels de l�image re�ue par 0 ou par 1.
//Requis 7 : Lorsque la valeur originale du pixel est inf�rieure au seuil, il est remplac� par un pixel
//noir.
//Requis 8 : Lorsque la valeur originale du pixel est sup�rieure ou �gale au seuil, il est remplac�
//par un pixel blanc.
void seuiller(double **image, int nb_lignes, int nb_colonnes, double seuil)
{
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
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


//Sous-programme : histogramme
//Entr�e : Une image en teinte de gris.
//Le nombre de ligne de cette image.
//Le nombre de colonne de cette image.
//Un entier repr�sentant un nombre de cat�gories
//Sortie : Un tableau 1D contenant la distribution des pixels en fonction du nombre de cat�gorie
//de couleur re�ue.
//Requis 10 : Cr�ez un tableau dynamique en 1d poss�dant le bon nombre de case. Ce nombre de
//case est �quivalent au nombre de cat�gorie.
//Requis 11 : On d�termine la cat�gorie de chaque pixel et on en fait le d�compte.
double* histogramme(double **image, int nb_lignes, int nb_colonnes, int nb_categories)
{
    double* histogramme = (double*)malloc(nb_categories * sizeof(double));
    for(int i = 0; i < nb_categories; i++)
    {
        histogramme[i] = 0;
    }
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            int categorie = (int)(image[i][j] * nb_categories);
            histogramme[categorie]++;
        }
    }
    return histogramme;
}

//Sous-programme : filtrer
//Entr�e : Un pointeur vers une image en teinte de gris.
//Le nombre de ligne de cette image.
//Le nombre de colonne de cette image.
//Un filtre � appliquer sur l�image.
//Sortie : Aucune
//Requis 12 : On cr�e une nouvelle image poss�dant les m�mes dimensions que l�image original.
//Requis 13 : On utilise l�image originale pour calculer la valeur de chaque pixel filtr�. La valeur des
//pixels filtr�s sont enregistr�s dans la nouvelle image.
//Requis 14 : On d�truit l�image originale et on modifie le pointeur de mani�re � point�e sur la
//nouvelle image.
//Requis 15 : Faites une fonction priv�e qui permet de calculer la valeur filtr�e d�un pixel. Pour filtrer
//un pixel, on se doit de calculer la convolution de ce pixel avec le filtre re�u.
//Requis 16 : Lorsque l'on applique un filtre � un pixel, on vient centrer le filtre sur le pixel cibl�. Ce
//qui veut dire qu'une portion du filtre est sur les voisins du pixel cibl�. La convolution
//est simplement l'accumulation des produits entre le filtre et l'image. Le r�sultat de cette
//accumulation remplace le pixel dans l'image trait�e.
void filtrer(double ***image, int nb_lignes, int nb_colonnes, double **filtre)
{
    double** nouvelle_image = creer_tableau2d(nb_lignes, nb_colonnes);
    for(int i = 0; i < nb_lignes; i++)
    {
        for(int j = 0; j < nb_colonnes; j++)
        {
            filtrer_pixel(*image, nb_lignes, nb_colonnes, filtre, i, j, nouvelle_image);
        }
    }
    detruire_tableau2d(image, nb_lignes);
    *image = nouvelle_image;
}

/****************************************************************************************
*                           D�FINTION DES FONCTIONS PRIV�ES                             *
****************************************************************************************/

//Faites une fonction priv�e qui permet de calculer la valeur filtr�e d�un pixel. Pour filtrer
//un pixel, on se doit de calculer la convolution de ce pixel avec le filtre re�u.
//Requis 16 : Lorsque l'on applique un filtre � un pixel, on vient centrer le filtre sur le pixel cibl�. Ce
//qui veut dire qu'une portion du filtre est sur les voisins du pixel cibl�. La convolution
//est simplement l'accumulation des produits entre le filtre et l'image. Le r�sultat de cette
//accumulation remplace le pixel dans l'image trait�e.
void filtrer_pixel(double **image, int nb_lignes, int nb_colonnes, double **filtre, int i, int j, double **nouvelle_image)
{
    for(int k = 0; k < 3; k++)
    {
        for(int l = 0; l < 3; l++)
        {
            int ligne = i + k - 1;
            int colonne = j + l - 1;
            if(ligne >= 0 && ligne < nb_lignes && colonne >= 0 && colonne < nb_colonnes)
            {
                nouvelle_image[i][j] += image[ligne][colonne] * filtre[k][l];
            }
        }
    }
}