/****************************************************************************************
    TABLEAU 2D

 *****************************************************************************************/

/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/



/****************************************************************************************
*                       DECLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/

double** creer_tableau2d(int nb_lignes, int nb_colonnes);
void detruire_tableau2d(double ***tableau, int nb_lignes);
void afficher_tableau2d(double **tableau, int nb_lignes, int nb_colonnes);
void initialiser_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double valeur);
double somme_tableau2d(double **tableau, int nb_lignes, int nb_colonnes);
void produit_par_scalaire2d(double **tableau, int nb_lignes, int nb_colonnes, double facteur);
void puissance_tableau2d(double **tableau, int nb_lignes, int nb_colonnes, double puissance);
void produit_tableau2d(double **tableau1, double **tableau2, int nb_lignes, int nb_colonnes, double ***tableau_produit);
void somme_des_colonnes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme);
void somme_des_lignes(double **tableau, int nb_lignes, int nb_colonnes, double **tableau_somme);
void sous_tableau(double **tableau, int nb_lignes, int nb_colonnes, int ligne, int colonne, int nb_lignes_sous_tableau, int nb_colonnes_sous_tableau, double ***sous_tableau);