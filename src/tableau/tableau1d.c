/****************************************************************************************
    TABLEAU_1D

*****************************************************************************************/


/****************************************************************************************
*                               DEFINTION DES CONSTANTES                                *
****************************************************************************************/



/****************************************************************************************
*                           DECLARATION DES FONCTIONS PRIVEES                           *
****************************************************************************************/



/****************************************************************************************
*                           DEFINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/
/*
NOM DE LA FONCTION : afficher tableau

DESCRIPTION

PARAM�TRES :

VALEUR DE RETOUR :
*/
void afficher_tableau1d(double *tableau, int taille){

}
/*
NOM DE LA FONCTION : somme_tableau1d

DESCRIPTION

PARAM�TRES : - tableau : Un tableau � une dimension � analyser.
             - taille : taille du tableau

VALEUR DE RETOUR :
*/
double somme_tableau1d(double *tableau, int taille){
    double somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}

double produit_tableau1d(double *tableau, int taille,double facteur){

}

double produit_scalaire1D(double *tableau1, double *tableau2, int taille){

}
/*
NOM DE LA FONCTION :

DESCRIPTION

PARAM�TRES :

VALEUR DE RETOUR :
*/
double* creer_tableau1d(int taille){

}
/*
NOM DE LA FONCTION :

DESCRIPTION

PARAM�TRES :

VALEUR DE RETOUR :
*/
void detruire_tableau1d(double **tableau){

}
/****************************************************************************************
*                           DEFINTION DES FONCTIONS PRIVEES                            *
****************************************************************************************/
