/****************************************************************************************
   TABLEAU 1D.H

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de manipuler  des tableaux 1D.

    Liste des sous-programmes :

    - afficher_tableau1d : permet d'afficher un tableau a 1 dimensions
    - somme_tableau1d : permet de faire la somme d'un tableau a 1 dimensions
    - produit_tableau1d : permet multiplier chaque terme d'un tableau 1d par un facteur
    - produit_scalaire1d : permet de multiplier chaque element d'un tableau par chaque element d'un autre tableau
    - creer_tableau1d : permet de creer un tableau a 1 dimension
    - detruire_tableau1d : permet de libére la memoire d'un tableau a 1 dimensions


 *****************************************************************************************/

/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/



/****************************************************************************************
*                       DECLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/
/*
NOM DE LA FONCTION : afficher_tableau1d

DESCRIPTION: affiche le tableau 1d

PARAMÈTRES : - tableau : Un tableau à une dimension à analyser.
             - taille : taille du tableau

VALEUR DE RETOUR : aucune
*/
void afficher_tableau1d(double *tableau, int taille);

/*
NOM DE LA FONCTION : somme_tableau1d

DESCRIPTION: Fait la somme de tout les termes du tableau

PARAMÈTRES : - tableau : Un tableau à une dimension à analyser.
             - taille : taille du tableau

VALEUR DE RETOUR : - somme: la somme des termes du tableau
*/
double somme_tableau1d(double *tableau, int taille);

/*
NOM DE LA FONCTION : produit_tableau1d

DESCRIPTION: L'objectif de cette fonction est de multiplier la valeur de chaque case du tableau par la valeur recu.

PARAMÈTRES : - tableau : Un tableau à une dimension à analyser.
             - taille : taille du tableau
             - valeur : la valeur utiliser pour la multiplication


VALEUR DE RETOUR : aucune
*/

void produit_tableau1d(double *tableau, int taille,double facteur);

/*
NOM DE LA FONCTION : produit_scalaire1d

DESCRIPTION: multiplie chaque terme d'un tableau par celui d'un autre

PARAMÈTRES :    - tableau1 : un tableau a 1 dimension
                - tableau2 : un tableau a 1 dimension
                - taille: la taille du tableau

VALEUR DE RETOUR :  - produit_scalaire: la valeur du produit scalaire
*/

double produit_scalaire1d(double *tableau1, double *tableau2, int taille);

/*
NOM DE LA FONCTION : creer_tableau1d

DESCRIPTION: La fonction a pour but de creer un tableau d'une taille demandée dont tout les valeurs sont nuls

PARAMÈTRES : - taille: taille du tableau

VALEUR DE RETOUR : - tableau: Le tableau creer
*/
double* creer_tableau1d(int taille);

/*
NOM DE LA FONCTION : detruire_tableau1d

DESCRIPTION : La fonction a pour but de libérer la mémoire allouée pour le tableau


PARAMÈTRES :
    - tableau : l'adresse du tableau à une dimension à analyser.

VALEUR DE RETOUR : aucune
*/
void detruire_tableau1d(double **tableau);
