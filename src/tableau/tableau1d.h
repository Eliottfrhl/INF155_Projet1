/****************************************************************************************
    TABLEAU 1D

 *****************************************************************************************/

/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/



/****************************************************************************************
*                       DECLARATION DES FONCTIONS PUBLIQUES                             *
****************************************************************************************/

void afficher_tableau1d(double *tableau, int taille);
double somme_tableau1d(double *tableau, int taille);
double produit_tableau1d(double *tableau, int taille,double facteur);
double produit_scalaire1D(double *tableau1, double *tableau2, int taille);
double* creer_tableau1d(int taille);
void detruire_tableau1d(double **tableau);
