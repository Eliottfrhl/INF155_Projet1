

/****************************************************************************************
    NOYAU_FILTRE.H

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de cr�er diff�rents filtres de traitement d'image et de les
    d�truire.

    Liste des sous-programmes :
    - filtre_passe_haut : cr�e un filtre passe-haut
    - filtre_passe_bas : cr�e un filtre passe-bas
    - filtre_moyenneur : cr�e un filtre moyenneur
    - filtre_laplacien : cr�e un filtre laplacien
    - detruire_filtre : lib�re la m�moire allou�e pour un filtre

 *****************************************************************************************/


#ifndef PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
#define PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H

/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/

typedef double** t_filtre;

/****************************************************************************************
*                       D�CLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/
/*
NOM DE LA FONCTION : filtre_passe_haut

DESCRIPTION :
 Cette fonction cr�e un filtre passe-haut de taille 3x3.

REMARQUE :
    Les valeurs du filtre utilis�es sont celles recommand�es. Nous observons que le r�sultat obtenu en appliquant
    le filtre est trop lumineux. En effet, la somme des valeurs de ce filtre vaut 12. Selon nous, il serait plus judicieux
    d'adapter les valeurs du filtre pour que la somme des valeurs soit inf�rieure ou �gale � 1.
    Cela permettrait de conserver la luminosit�


PARAM�TRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_passe_haut();

/*
NOM DE LA FONCTION : filtre_passe_bas

DESCRIPTION :
 Cette fonction cr�e un filtre passe-bas de taille 3x3.

PARAM�TRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_passe_bas();

/*
NOM DE LA FONCTION : filtre_moyenneur

DESCRIPTION :
 Cette fonction cr�e un filtre moyenneur de taille 3x3.

PARAM�TRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_moyenneur();

/*
NOM DE LA FONCTION : filtre_laplacien

DESCRIPTION :
    Cette fonction cr�e un filtre laplacien de taille 3x3.

PARAM�TRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_laplacien();

/*
NOM DE LA FONCTION : detruire_filtre

DESCRIPTION :
    Cette proc�dure lib�re la m�moire allou�e pour un filtre.

PARAM�TRES :
    - filtre � d�truire de type t_filtre

VALEUR DE RETOUR :
    Aucune
*/
void detruire_filtre(t_filtre filtre);

#endif //PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
