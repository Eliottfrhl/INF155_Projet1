

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



/****************************************************************************************
*                       DÉCLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/

double** filtre_passe_haut();
double** filtre_passe_bas();
double** filtre_moyenneur();
double** filtre_laplacien();
void detruire_filtre(double ***filtre);

#endif //PROJET1_LIBRAIREIMAGE_NOYAU_FILTRE_H
