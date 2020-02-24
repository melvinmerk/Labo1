/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Triangle.h
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : ce fichier contient la déclaration de la classe Triangle.

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
 */

#ifndef LABO1_TRIANGLE_H
#define LABO1_TRIANGLE_H

#include "Couleur.h"

class Triangle {
    friend std::ostream& operator<<(std::ostream& os, const Triangle& triangle);
public:
    // Constructeur par défaut (le membre privé couleur sera automatiquement construit par défaut)
    Triangle() : base(0), hauteur(0) {};
    // Constructeur avec paramètre
    Triangle(double base, double hauteur, Couleur couleur) : base(base), hauteur(hauteur), couleur(couleur) {};

    double getBase() const;
    void setBase(double base);

    double getHauteur() const;
    void setHauteur(double hauteur);

    Couleur getCouleur() const;
    void setCouleur(const Couleur &couleur);

    double getSurface() const;

private:
    double base;
    double hauteur;
    Couleur couleur;
};

#endif //LABO1_TRIANGLE_H
