//
// Created by Melvin on 24/02/2020.
//

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
