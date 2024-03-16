/****************************************************************************************
    TABLEAU 2D.H

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui permetent de manipuler  des tableaux 2D.

    Liste des sous-programmes :
    - creer_tableau2d : permet de creer un tableau en 2 dimensions
    - detruire_tableau2d : permet de libére la memoire d'un tableau en 2 dimensions colonne par colonne
    - afficher_tableau2d : permet d'afficher un tableau en 2 dimensions
    - initialiser_tableau2d : permet d'initialiser un tableau en 2 dimensions avec une valeur donée
    - somme_tableau2d : permet de faire la somme d'un tableau en 2 dimensions
    - produit_par_scalaire2d : permet de multiplier par un facteur chaque element d'un tableau en 2 dimenssions
    - puissance_tableau2d : permet d'elever chaque element d'un tableau a 2 dimensions a une puissance donnée
    - produit_tableau2d : permet multiplier 2 tableau 2d terme a terme
    - somme_des_colonnes : permet de calculer la somme des colones d'un tableau a 2 dimensions
    - somme_des_lignes : permet la somme des lignes d'un tableau a 2 dimensions
    - sous_tableau : permet de creer un sous_tableau d'un tableau en 2 dimensions



 *****************************************************************************************/

/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/



/****************************************************************************************
*                       DECLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/
/*
NOM DE LA FONCTION : creer_tableau2d

DESCRIPTION : Crée un tableau 2d


PARAMÈTRES :
    - nb_lignes : nombre de lignes
    - nb_colonnes : nombre de colonnes

VALEUR DE RETOUR :
    - tableau : un tableau 2d
*/
double** creer_tableau2d(int nb_lignes, int nb_colonnes);

/*
 * NOM DE LA FONCTION : detruire_tableau2d
 *
 * DESCRIPTION : libère la mémoire allouée pour le tableau 2d colonne par colonne
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d (donc **tableau pour le passage par adresse)
 *     - nb_lignes : nombre de lignes
 */
void detruire_tableau2d(double ***tableau, int nb_lignes);
/*
 * NOM DE LA FONCTION : afficher_tableau2d
 *
 * DESCRIPTION : affiche un tableau 2d
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 */
void afficher_tableau2d(double **tableau, int nb_lignes, int nb_colonnes);
/*
 * NOM DE LA FONCTION : initialiser_tableau2d
 *
 * DESCRIPTION : initialise un tableau 2d avec une valeur donnée
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - valeur : valeur d'initialisation
 */
void initialiser_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double valeur);
/*
* NOM DE LA FONCTION : somme_tableau2d
*
* DESCRIPTION : calcule la somme des éléments d'un tableau 2d
*
* PARAMÈTRES :
*     - tableau : un tableau 2d
*     - nb_lignes : nombre de lignes
*     - nb_colonnes : nombre de colonnes
*
* VALEUR DE RETOUR :
*     - somme : la somme des éléments du tableau
*/
double somme_tableau2d(double **tableau, int nb_lignes, int nb_colonnes);
/*
 * NOM DE LA FONCTION : produit_par_scalaire2d
 *
 * DESCRIPTION : multiplie chaque élément d'un tableau 2d par un facteur
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - facteur : le facteur de multiplication
 *
 * VALEUR DE RETOUR : aucune
 */
void produit_par_scalaire2d(double **tableau, int nb_lignes, int nb_colonnes, double facteur);
/*
 * NOM DE LA FONCTION : puissance_tableau2d
 *
 * DESCRIPTION : élève chaque élément d'un tableau 2d à une puissance donnée
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - puissance : la puissance
 *
 * VALEUR DE RETOUR : aucune
 */
void puissance_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double puissance);
/*
 * NOM DE LA FONCTION : produit_tableau2d
 *
 * DESCRIPTION : multiplie deux tableaux 2d terme à terme
 *
 * PARAMÈTRES :
 *     - tableau1 : un tableau 2d
 *     - tableau2 : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - tableau_produit : un pointeur vers un tableau 2d pour stocker le produit
 *
 * VALEUR DE RETOUR : aucune
 */
void produit_tableau2d(double **tableau1, double **tableau2, int nb_lignes, int nb_colonnes, double ***tableau_produit);
/*
 * NOM DE LA FONCTION : somme_des_colonnes
 *
 * DESCRIPTION : calcule la somme des colonnes d'un tableau 2d
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - tableau_somme : un pointeur vers un tableau 1d pour stocker les sommes des colonnes
 *
 * VALEUR DE RETOUR : aucune
 */
void somme_des_colonnes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme);
/*
 * NOM DE LA FONCTION : somme_des_lignes
 *
 * DESCRIPTION : calcule la somme des lignes d'un tableau 2d
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - tableau_somme : un pointeur vers un tableau 1d pour stocker les sommes des lignes
 *
 * VALEUR DE RETOUR : aucune
 */
void somme_des_lignes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme);
/*
 * NOM DE LA FONCTION : sous_tableau
 *
 * DESCRIPTION : extrait un sous-tableau d'un tableau 2d
 *
 * PARAMÈTRES :
 *     - tableau : un tableau 2d
 *     - nb_lignes : nombre de lignes
 *     - nb_colonnes : nombre de colonnes
 *     - ligne : ligne de départ du sous-tableau
 *     - colonne : colonne de départ du sous-tableau
 *     - nb_lignes_sous_tableau : nombre de lignes du sous-tableau
 *     - nb_colonnes_sous_tableau : nombre de colonnes du sous-tableau
 *     - sous_tableau : un pointeur vers un tableau 2d pour stocker le sous-tableau
 *
 * VALEUR DE RETOUR : aucune
 */
void sous_tableau(double **tableau, int nb_lignes, int nb_colonnes, int ligne, int colonne, int nb_lignes_sous_tableau, int nb_colonnes_sous_tableau, double ***sous_tableau);