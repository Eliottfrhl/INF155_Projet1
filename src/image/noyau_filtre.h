//
// Created by frohl on 16/03/2024.
//

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
