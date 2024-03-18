

/****************************************************************************************
    NOYAU_FILTRE.H

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de créer différents filtres de traitement d'image et de les
    détruire.

    Liste des sous-programmes :
    - filtre_passe_haut : crée un filtre passe-haut
    - filtre_passe_bas : crée un filtre passe-bas
    - filtre_moyenneur : crée un filtre moyenneur
    - filtre_laplacien : crée un filtre laplacien
    - detruire_filtre : libère la mémoire allouée pour un filtre

 *****************************************************************************************/


#ifndef PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
#define PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

typedef double** t_filtre;

/****************************************************************************************
*                       DÉCLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/
/*
NOM DE LA FONCTION : filtre_passe_haut

DESCRIPTION :
 Cette fonction crée un filtre passe-haut de taille 3x3.

REMARQUE :
    Les valeurs du filtre utilisées sont celles recommandées. Nous observons que le résultat obtenu en appliquant
    le filtre est trop lumineux. En effet, la somme des valeurs de ce filtre vaut 12. Selon nous, il serait plus judicieux
    d'adapter les valeurs du filtre pour que la somme des valeurs soit inférieure ou égale à 1.
    Cela permettrait de conserver la luminosité


PARAMÈTRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_passe_haut();

/*
NOM DE LA FONCTION : filtre_passe_bas

DESCRIPTION :
 Cette fonction crée un filtre passe-bas de taille 3x3.

PARAMÈTRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_passe_bas();

/*
NOM DE LA FONCTION : filtre_moyenneur

DESCRIPTION :
 Cette fonction crée un filtre moyenneur de taille 3x3.

PARAMÈTRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_moyenneur();

/*
NOM DE LA FONCTION : filtre_laplacien

DESCRIPTION :
    Cette fonction crée un filtre laplacien de taille 3x3.

PARAMÈTRES :
    Aucun

VALEUR DE RETOUR :
    - filtre de type t_filtre
*/
t_filtre filtre_laplacien();

/*
NOM DE LA FONCTION : detruire_filtre

DESCRIPTION :
    Cette procédure libère la mémoire allouée pour un filtre.

PARAMÈTRES :
    - filtre à détruire de type t_filtre

VALEUR DE RETOUR :
    Aucune
*/
void detruire_filtre(t_filtre filtre);

#endif //PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
