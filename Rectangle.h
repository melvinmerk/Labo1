/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Vecteur.h
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : ce fichier contient la déclaration de classe vecteur ainsi que la
							définition de ses constructeurs

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
 */

#ifndef LABO1_RECTANGLE_H
#define LABO1_RECTANGLE_H

#include "Couleur.h"

class Rectangle {
    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle);
public:
    // Constructeur par défaut (le membre privé couleur sera automatiquement construit par défaut)
    Rectangle() : largeur(0), longueur(0) {};
    // Constructeur avec paramètre
    Rectangle(double largeur, double longueur, Couleur couleur) : largeur(largeur), longueur(longueur), couleur(couleur) {};

    double getLargeur() const;
    void setLargeur(double largeur);

    double getLongueur() const;
    void setLongueur(double longueur);

    void setCouleur(const Couleur &couleur);
    Couleur getCouleur() const;

    double getSurface() const;

private:
    double largeur;
    double longueur;
    Couleur couleur;
};


#endif //LABO1_RECTANGLE_H
