

/****************************************************************************************
    NOYAU_FILTRE.H

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de manipuler  des tableaux 2D.

    Liste des sous-programmes :
    - filtre_passe_haut :
    - filtre_passe_bas :
    - filtre_moyenneur :
    - filtre_laplacien :
    - detruire_filtre :

 *****************************************************************************************/


#ifndef PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
#define PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

typedef struct {
    int rows; // Nombre de lignes du noyau
    int cols; // Nombre de colonnes du noyau
    double **data; // Tableau 2D dynamique contenant des nombres réels
} t_filtre;

/****************************************************************************************
*                       DÉCLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/
/*
NOM DE LA FONCTION : filtre_passe_haut

DESCRIPTION :

PARAMÈTRES :

VALEUR DE RETOUR :
    - filtre:
*/
double** filtre_passe_haut();

/*
NOM DE LA FONCTION : filtre_passe_bas

DESCRIPTION :

PARAMÈTRES :

VALEUR DE RETOUR :
    - filtre:
*/
double** filtre_passe_bas();

/*
NOM DE LA FONCTION : filtre_moyenneur

DESCRIPTION :

PARAMÈTRES :

VALEUR DE RETOUR :
    - filtre:
*/
double** filtre_moyenneur();

/*
NOM DE LA FONCTION : filtre_laplacien

DESCRIPTION :

PARAMÈTRES :

VALEUR DE RETOUR :
    - filtre:
*/
double** filtre_laplacien();
/*
NOM DE LA FONCTION : detruire_filtre

DESCRIPTION :

PARAMÈTRES :
    - filtre:

VALEUR DE RETOUR : aucune
*/
void detruire_filtre(double ***filtre);

#endif //PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
