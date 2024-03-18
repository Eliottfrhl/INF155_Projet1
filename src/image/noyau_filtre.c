/****************************************************************************************
    NOYAU_FILTRE.C

    Auteur  : Liam Dery / Eliott Frohly
    Date    : 16 mars 2024

    Ce module contient des sous-programmes qui ???????????????????????????????.


 *****************************************************************************************/

#include "noyau_filtre.h"
#include "../tableau/tableau2d.h"
#include <stdlib.h>

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

/****************************************************************************************
*                           DÉCLARATION DES FONCTIONS PRIVÉES                           *
****************************************************************************************/

/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PUBLIQUES                            *
****************************************************************************************/


t_filtre filtre_passe_haut(){
    t_filtre filtre = creer_tableau2d(3, 3); //On crée un filtre de type t_filtre
    // On remplit le filtre avec les valeurs du filtre passe-haut
    filtre[0][0] = 0;
    filtre[0][1] = 0;
    filtre[0][2] = 0;
    filtre[1][0] = 0;
    filtre[1][1] = 1;
    filtre[1][2] = 0;
    filtre[2][0] = 0;
    filtre[2][1] = 0;
    filtre[2][2] = 0;
    return filtre;
}


t_filtre filtre_passe_bas(){
    t_filtre filtre = creer_tableau2d(3, 3); //On crée un filtre de type t_filtre
    // On remplit le filtre avec les valeurs du filtre passe-bas
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

t_filtre filtre_moyenneur(){
    t_filtre filtre = creer_tableau2d(3, 3); //On crée un filtre de type t_filtre
    // On remplit le filtre avec les valeurs du filtre moyenneur
    filtre[0][0] = 1.0/9;
    filtre[0][1] = 1.0/9;
    filtre[0][2] = 1.0/9;
    filtre[1][0] = 1.0/9;
    filtre[1][1] = 1.0/9;
    filtre[1][2] = 1.0/9;
    filtre[2][0] = 1.0/9;
    filtre[2][1] = 1.0/9;
    filtre[2][2] = 1.0/9;
    return filtre;
}

t_filtre filtre_laplacien(){
    t_filtre filtre = creer_tableau2d(3, 3); //On crée un filtre de type t_filtre
    // On remplit le filtre avec les valeurs du filtre laplacien
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

void detruire_filtre(t_filtre filtre){
    // On détruit le filtre avec la fonction detruire_tableau2d du module tableau2d
    detruire_tableau2d(&filtre,3);
}
/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PRIVÉES                             *
****************************************************************************************/