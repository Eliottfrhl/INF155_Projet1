/****************************************************************************************
    NOYAU_FILTRE.C

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui ???????????????????????????????.


 *****************************************************************************************/

#include "noyau_filtre.h"
#include "../tableau/tableau2d.h"

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

/****************************************************************************************
*                           DÉCLARATION DES FONCTIONS PRIVÉES                           *
****************************************************************************************/

/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/


// Sous-programme : filtre_passe_haut
//Entrée : Aucune
//Sortie : Le tableau 3x3 décrivant le filtre illustré au requis 5.
//Requis 5 : Le noyau du filtre passe-haut possède ces valeurs :
//1 1 1
//1 4 1
//1 1 1

double** filtre_passe_haut()
{
    double** filtre;
    filtre = creer_tableau2d(3,3);
    filtre[0][0] = 1;
    filtre[0][1] = 1;
    filtre[0][2] = 1;
    filtre[1][0] = 1;
    filtre[1][1] = 4;
    filtre[1][2] = 1;
    filtre[2][0] = 1;
    filtre[2][1] = 1;
    filtre[2][2] = 1;
    return filtre;
}

double** filtre_passe_bas(){
    double** filtre;
    filtre = creer_tableau2d(3,3);
    filtre[0][0] = 0;
    filtre[0][1] = -1;
    filtre[0][2] = 0;
    filtre[1][0] = -1;
    filtre[1][1] = 5;
    filtre[1][2] = -1;
    filtre[2][0] = 0;
    filtre[2][1] = -1;
    filtre[2][2] = 0;
    return filtre;
}


double** filtre_moyenneur(){
    double** filtre;
    filtre = creer_tableau2d(3,3);
    filtre[0][0] = 1.0/9.0;
    filtre[0][1] = 1.0/9.0;
    filtre[0][2] = 1.0/9.0;
    filtre[1][0] = 1.0/9.0;
    filtre[1][1] = 1.0/9.0;
    filtre[1][2] = 1.0/9.0;
    filtre[2][0] = 1.0/9.0;
    filtre[2][1] = 1.0/9.0;
    filtre[2][2] = 1.0/9.0;
    return filtre;

}

double** filtre_laplacien(){
    double** filtre;
    filtre = creer_tableau2d(3,3);
    filtre[0][0] = 1;
    filtre[0][1] = 1;
    filtre[0][2] = 1;
    filtre[1][0] = 1;
    filtre[1][1] = -8;
    filtre[1][2] = 1;
    filtre[2][0] = 1;
    filtre[2][1] = 1;
    filtre[2][2] = 1;
    return filtre;
}

void detruire_filtre(double ***filtre){
    detruire_tableau2d(filtre, 3);
}
/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PRIVÉES                             *
****************************************************************************************/