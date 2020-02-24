/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Cercle.h
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : Ce ficier contient la déclaration des métohdes de la classe Cercle
              Ainsi que l'implémentation des constructeurs, car ceux-ci sont simple

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
 */
#ifndef LABO1_CERCLE_H
#define LABO1_CERCLE_H

#include "Couleur.h"

class Cercle {
    friend std::ostream& operator<<(std::ostream& os, const Cercle& cercle);
public:
    // Constructeur par défaut (le membre privé couleur sera automatiquement construit par défaut)
    Cercle() : rayon(0) {};
    // Constructeur avec paramètre
    Cercle(double rayon, Couleur couleur) : rayon(rayon), couleur(couleur) {};

    double getRayon() const;
    void setRayon(double rayon);

    Couleur getCouleur() const;
    void setCouleur(const Couleur &couleur);

    double getSurface() const;

private:
    double rayon;
    Couleur couleur;
};

#endif //LABO1_CERCLE_H
